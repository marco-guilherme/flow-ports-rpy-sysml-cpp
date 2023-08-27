/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Bar
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Bar.h
*********************************************************************/

#ifndef Bar_H
#define Bar_H

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
//## class Bar
#include "intFlowInterface.h"
//## auto_generated
#include <oxf\OMDefaultReactivePort.h>
//## package Default

//## class Bar
class Bar : public OMReactive, public intFlowInterface {
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
        void connectBar(Bar* part);
        
        ////    Attributes    ////
    
    protected :
    
        int _p_;		//## attribute _p_
    };
    
    //## package Default
    class ipsum_SP_C : public intFlowInterface {
        ////    Constructors and destructors    ////
        
    public :
    
        //## auto_generated
        ipsum_SP_C();
        
        //## auto_generated
        virtual ~ipsum_SP_C();
        
        ////    Operations    ////
        
        //## auto_generated
        void SetValue(int data, void * pCaller = NULL);
        
        //## auto_generated
        void connectBar(Bar* part);
        
        //## auto_generated
        intFlowInterface* getItsIntFlowInterface();
        
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
    Bar(IOxfActive* theActiveContext = 0);
    
    //## auto_generated
    ~Bar();
    
    ////    Operations    ////
    
//#[ ignore
    void SetValue(int data, void * pCaller = NULL);
    
    void setIpsum(int p_ipsum);
//#]

    ////    Additional operations    ////
    
    //## auto_generated
    p1_C* getP1() const;
    
    //## auto_generated
    p1_C* get_p1() const;
    
    //## auto_generated
    ipsum_SP_C* getIpsum_SP() const;
    
    //## auto_generated
    ipsum_SP_C* get_ipsum_SP() const;
    
    //## auto_generated
    int getIpsum() const;
    
    //## auto_generated
    virtual bool startBehavior();

protected :

    //## auto_generated
    void initRelations();
    
    //## auto_generated
    void initStatechart();
    
    ////    Attributes    ////
    
    int ipsum;		//## attribute ipsum
    
    ////    Relations and components    ////
    
//#[ ignore
    p1_C p1;
    
    ipsum_SP_C ipsum_SP;
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
    
    // Receiving:
    //## statechart_method
    inline bool Receiving_IN() const;
    
    ////    Framework    ////

protected :

//#[ ignore
    enum Bar_Enum {
        OMNonState = 0,
        Receiving = 1
    };
    
    int rootState_subState;
    
    int rootState_active;
//#]
};

inline bool Bar::rootState_IN() const {
    return true;
}

inline bool Bar::Receiving_IN() const {
    return rootState_subState == Receiving;
}

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Bar.h
*********************************************************************/
