/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Foo
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Foo.h
*********************************************************************/

#ifndef Foo_H
#define Foo_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//## auto_generated
#include "Default.h"
//## auto_generated
#include <oxf\omreactive.h>
//## auto_generated
#include <oxf\state.h>
//## auto_generated
#include <oxf\event.h>
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## class bar_SP_C
#include "intFlowInterface.h"
//## package Default

//## class Foo
class Foo : public OMReactive {
public :

//#[ ignore
    //## package Default
    class p1_C : public OMDefaultReactivePort {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        p1_C();
        
        //## auto_generated
        virtual ~p1_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void connectFoo(Foo* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package Default
    class bar_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        bar_SP_C();
        
        //## auto_generated
        virtual ~bar_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface();
        
        //## auto_generated
        intFlowInterface* getOutBound();
        
        ////    Additional operations    ////
        
        //## auto_generated
        void setItsIntFlowInterface(intFlowInterface* p_intFlowInterface);
    
    protected :
    
        //## auto_generated
        void cleanUpRelations();
        
        ////    Attributes    ////
        
        int _p_;		//## attribute _p_
        
        ////    Relations and components    ////
        
        intFlowInterface* itsIntFlowInterface;		//## link itsIntFlowInterface
    };
//#]

    ////    Constructors and destructors    ////
    
    //## auto_generated
    Foo(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Foo();
    
    ////    Operations    ////
    
//#[ ignore
    void setBar(int p_bar);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p1_C* getP1() const;
    
    //## auto_generated
    p1_C* get_p1() const;
    
    //## auto_generated
    bar_SP_C* getBar_SP() const;
    
    //## auto_generated
    bar_SP_C* get_bar_SP() const;
    
    //## auto_generated
    int getBar() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    //## auto_generated
    void cancelTimeouts();
    
    //## auto_generated
    bool cancelTimeout(const IOxfTimeout* arg);
    
    ////    Attributes    ////
    
    int bar;		//## attribute bar
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_C p1;
    
    bar_SP_C bar_SP;
//#]

    ////    Framework operations    ////

public :

    // rootState:
    //## statechart_method
    inline bool rootState_IN() const;
    
    //## statechart_method
    virtual void rootState_entDef();
    
    //## statechart_method
    virtual IOxfReactive::TakeEventStatus rootState_processEvent();
    
    // Updating:
    //## statechart_method
    inline bool Updating_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Foo_Enum {
        OMNonState = 0,
        Updating = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
    
    IOxfTimeout* rootState_timeout;
//#]
};

inline bool Foo::rootState_IN() const {
    return true;
}

inline bool Foo::Updating_IN() const {
    return rootState_subState == Updating;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Foo.h
*********************************************************************/
