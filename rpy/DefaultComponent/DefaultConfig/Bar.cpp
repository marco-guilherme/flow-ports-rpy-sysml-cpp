/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Bar
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Bar.cpp
*********************************************************************/

//## auto_generated
#include <oxf\omthread.h>
//## auto_generated
#include "Bar.h"
//## package Default

//## class Bar
//#[ ignore
Bar::p1_C::p1_C() : _p_(0) {
}

Bar::p1_C::~p1_C() {
}

void Bar::p1_C::connectBar(Bar* part) {
    InBound.setItsDefaultProvidedInterface(part);
    InBound.setPort(this); // for IS_PORT macro support
    
}

Bar::ipsum_SP_C::ipsum_SP_C() : _p_(0) {
    itsIntFlowInterface = NULL;
}

Bar::ipsum_SP_C::~ipsum_SP_C() {
    cleanUpRelations();
}

void Bar::ipsum_SP_C::SetValue(int data, void * pCaller) {
    
    if (itsIntFlowInterface != NULL) {
        itsIntFlowInterface->SetValue(data,this);
    }
    
}

void Bar::ipsum_SP_C::connectBar(Bar* part) {
    setItsIntFlowInterface(part);
    
}

intFlowInterface* Bar::ipsum_SP_C::getItsIntFlowInterface() {
    return this;
}

void Bar::ipsum_SP_C::setItsIntFlowInterface(intFlowInterface* p_intFlowInterface) {
    itsIntFlowInterface = p_intFlowInterface;
}

void Bar::ipsum_SP_C::cleanUpRelations() {
    if(itsIntFlowInterface != NULL)
        {
            itsIntFlowInterface = NULL;
        }
}
//#]

Bar::Bar(IOxfActive* theActiveContext) {
    setActiveContext(theActiveContext, false);
    initRelations();
    initStatechart();
}

Bar::~Bar() {
}

//#[ ignore
void Bar::SetValue(int data, void * pCaller) {
    if (pCaller == (void *)get_ipsum_SP()) {
        setIpsum(data);
    }
}

void Bar::setIpsum(int p_ipsum) {
    if (ipsum != p_ipsum) {
        ipsum = p_ipsum;
        FLOW_DATA_RECEIVE("ipsum", ipsum, x2String);
    }
    
}
//#]

Bar::p1_C* Bar::getP1() const {
    return (Bar::p1_C*) &p1;
}

Bar::p1_C* Bar::get_p1() const {
    return (Bar::p1_C*) &p1;
}

Bar::ipsum_SP_C* Bar::getIpsum_SP() const {
    return (Bar::ipsum_SP_C*) &ipsum_SP;
}

Bar::ipsum_SP_C* Bar::get_ipsum_SP() const {
    return (Bar::ipsum_SP_C*) &ipsum_SP;
}

int Bar::getIpsum() const {
    return ipsum;
}

bool Bar::startBehavior() {
    bool done = false;
    done = OMReactive::startBehavior();
    return done;
}

void Bar::initRelations() {
    if (get_p1() != NULL) {
        get_p1()->connectBar(this);
    }
    if (get_ipsum_SP() != NULL) {
        get_ipsum_SP()->connectBar(this);
    }
}

void Bar::initStatechart() {
    rootState_subState = OMNonState;
    rootState_active = OMNonState;
}

void Bar::rootState_entDef() {
    {
        rootState_subState = Receiving;
        rootState_active = Receiving;
    }
}

IOxfReactive::TakeEventStatus Bar::rootState_processEvent() {
    IOxfReactive::TakeEventStatus res = eventNotConsumed;
    if(rootState_active == Receiving)
        {
            if(IS_EVENT_TYPE_OF(evUpdate_Default_id))
                {
                    //#[ transition 1 
                    std::cout << "Lorem receiving " << getIpsum() << std::endl;
                    std::cout << "---------------------" << std::endl;
                    //#]
                    rootState_subState = Receiving;
                    rootState_active = Receiving;
                    res = eventConsumed;
                }
            
        }
    return res;
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Bar.cpp
*********************************************************************/
