/*********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: intFlowInterface
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/

#ifndef intFlowInterface_H
#define intFlowInterface_H

//## auto_generated
#include <oxf\oxf.h>
//## auto_generated
#include <..\Profiles\SysML\SIDefinitions.h>
//#[ ignore
//## package FlowPortInterfaces

//## ignore
class intFlowInterface {
    ////    Constructors and destructors    ////
    
public :

    //## auto_generated
    intFlowInterface();
    
    //## auto_generated
    virtual ~intFlowInterface() = 0;
    
    ////    Operations    ////
    
    //## operation SetValue(int,void *)
    virtual void SetValue(int data, void * pCaller = NULL) = 0;
};
//#]

#endif
/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\intFlowInterface.h
*********************************************************************/
