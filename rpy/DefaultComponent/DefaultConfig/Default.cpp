/********************************************************************
	Rhapsody	: 7.6 
	Login		: Administrador
	Component	: DefaultComponent 
	Configuration 	: DefaultConfig
	Model Element	: Default
//!	Generated Date	: Wed, 23, Aug 2023  
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/

//## auto_generated
#include "Default.h"
//## classInstance itsBar
#include "Bar.h"
//## classInstance itsFoo
#include "Foo.h"
//## package Default


//## classInstance itsBar
Bar itsBar;

//## classInstance itsFoo
Foo itsFoo;

void Default_initRelations() {
    {
        {
            itsBar.setShouldDelete(false);
        }
        {
            itsFoo.setShouldDelete(false);
        }
    }
    {
        
        itsFoo.get_p1()->setItsDefaultRequiredInterface(itsBar.get_p1()->getItsDefaultProvidedInterface());
        
    }{
        
        itsBar.get_p1()->setItsDefaultRequiredInterface(itsFoo.get_p1()->getItsDefaultProvidedInterface());
        
    }
    {
        
        itsFoo.get_bar_SP()->setItsIntFlowInterface(itsBar.get_ipsum_SP()->getItsIntFlowInterface());
        
    }
}

bool Default_startBehavior() {
    bool done = true;
    done &= itsBar.startBehavior();
    done &= itsFoo.startBehavior();
    return done;
}

//#[ ignore
Default_OMInitializer::Default_OMInitializer() {
    Default_initRelations();
    Default_startBehavior();
}

Default_OMInitializer::~Default_OMInitializer() {
}
//#]

//## event evUpdate()
evUpdate::evUpdate() {
    setId(evUpdate_Default_id);
}

bool evUpdate::isTypeOf(const short id) const {
    return (evUpdate_Default_id==id);
}

/*********************************************************************
	File Path	: DefaultComponent\DefaultConfig\Default.cpp
*********************************************************************/
