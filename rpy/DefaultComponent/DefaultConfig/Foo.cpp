/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Foo
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Foo.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Foo.h"
//## package Default

//## class Foo
//#[ ignore
Foo::p1_C::p1_C() : _p_(0) {
}

Foo::p1_C::~p1_C() {
}

void Foo::p1_C::connectFoo(Foo* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

Foo::bar_SP_C::bar_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Foo::bar_SP_C::~bar_SP_C() {
    cleanUpRelations();
}

void Foo::bar_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,pCaller);
    }
    
}

intFlowInterface* Foo::bar_SP_C::getItsIntFlowInterface() {
    return this;
}

intFlowInterface* Foo::bar_SP_C::getOutBound() {
    return this;
}

void Foo::bar_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Foo::bar_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Foo::Foo(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Foo::~Foo() {
    cancelTimeouts();
}

//#[ ignore
void Foo::setBar(int p_bar) {
    if (bar != p_bar)  {
        bar = p_bar;
        FLOW_DATA_SEND(bar, bar_SP, SetValue, x2String);
    }
}
//#]

Foo::p1_C* Foo::getP1() const {
    return (Foo::p1_C*) &p1;
}

Foo::p1_C* Foo::get_p1() const {
    return (Foo::p1_C*) &p1;
}

Foo::bar_SP_C* Foo::getBar_SP() const {
    return (Foo::bar_SP_C*) &bar_SP;
}

Foo::bar_SP_C* Foo::get_bar_SP() const {
    return (Foo::bar_SP_C*) &bar_SP;
}

int Foo::getBar() const {
    return bar;
}

bool Foo::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Foo::initRelations() {
    if (get_p1() != NULL) {
        get_p1()->connectFoo(this);
    }
}

void Foo::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
    rootState_timeout = NULL;
}

void Foo::cancelTimeouts() {
    if(rootState_timeout != NULL)
        {
            rootState_timeout->cancel();
            rootState_timeout = NULL;
        }
}

bool Foo::cancelTimeout(const IOxfTimeout* arg) {
    bool res = false;
    if(rootState_timeout == arg)
        {
            rootState_timeout = NULL;
            res = true;
        }
    return res;
}

void Foo::rootState_entDef() {
    {
        rootState_subState = Updating;
        rootState_active = Updating;
        rootState_timeout = scheduleTimeout(1000, NULL);
    }
}

IOxfReactive::TakeEventStatus Foo::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == Updating)
        {
            if(IS_EVENT_TYPE_OF(OMTimeoutEventId))
                {
                    if(getCurrentEvent() == rootState_timeout)
                        {
                            if(rootState_timeout != NULL)
                                {
                                    rootState_timeout->cancel();
                                    rootState_timeout = NULL;
                                }
                            //#[ transition 1 
                            std::cout << "Foo sending " << bar + 1 << std::endl;
                            setBar(bar + 1);
                            OUT_PORT(p1) -> GEN(evUpdate);
                            //#]
                            rootState_subState = Updating;
                            rootState_active = Updating;
                            rootState_timeout = scheduleTimeout(1000, NULL);
                            res = eventConsumed;
                        }
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Foo.cpp
*********************************************************************/
