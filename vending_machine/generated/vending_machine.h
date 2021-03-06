/* (C) Your company*//* Command line options: -l cx -v -p ASTAH -o vending_machine -t machine:vending_machine:ui ../vending_machine.asta   */
/* This file is generated from vending_machine.asta - do not edit manually*/
/* Generated on: Sun May 22 11:37:53 CEST 2016 / version 3.6.14 */


#ifndef __VENDING_MACHINE_H__
#define __VENDING_MACHINE_H__


/* Header to define simple data types */
#include <stdint.h>

/* State definitions */
typedef enum{
	WaitForSelection,
	PricePayed,
	SelectionDone,
	FinalState0,
	__VENDING_MACHINE_LAST_STATE__} VENDING_MACHINE_STATES_T;






/* Predefined types required by the codegen. You can provide your own  */
/* definitions by setting the following define somewhere in your built env. */
#ifndef __PROVIDE_OWN_VENDING_MACHINE_STATEMACHINE_TYPES__
	typedef uint8_t VENDING_MACHINE_ENTRY_FLAG_T;
	typedef VENDING_MACHINE_STATES_T VENDING_MACHINE_STATEVAR_T;
	typedef uint8_t VENDING_MACHINE_INST_ID_T;
	typedef uint8_t VENDING_MACHINE_EV_CONSUMED_FLAG_T ;
#endif




/* Instance data definition of state machine */
typedef struct{
	VENDING_MACHINE_ENTRY_FLAG_T waitforselectionEntry;
	VENDING_MACHINE_STATEVAR_T stateVar;
		VENDING_MACHINE_INST_ID_T inst_id;
} VENDING_MACHINE_INSTANCEDATA_T;

/* Helper to initialize the machine's instance data */
#define VENDING_MACHINE_INSTANCEDATA_INIT {\
	1,\
	(VENDING_MACHINE_STATEVAR_T) WaitForSelection /* set init state of top state */,\
	0 /* instance id */ } 

/* Region handler prototypes  */

/*Prototype of the state machine function */
void  vending_machine(VENDING_MACHINE_INSTANCEDATA_T *instanceVar, VENDING_MACHINE_EVENT_T msg);


/*Prototoye of the reset machine function */
void vending_machineResetMachine(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);

// Helper(s) to find out if the machine is in a certain state
uint8_t vending_machineIsInWaitForSelection(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);
uint8_t vending_machineIsInPricePayed(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);
uint8_t vending_machineIsInSelectionDone(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);
uint8_t vending_machineIsInFinalState0(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);


/* Macros to test if the machine is in a certain state. */
#define VENDING_MACHINE_IS_IN_WAITFORSELECTION(instance)((((&instance)->stateVar==WaitForSelection)) ? (1U) : (0U))
#define VENDING_MACHINE_IS_IN_PRICEPAYED(instance)((((&instance)->stateVar==PricePayed)) ? (1U) : (0U))
#define VENDING_MACHINE_IS_IN_SELECTIONDONE(instance)((((&instance)->stateVar==SelectionDone)) ? (1U) : (0U))
#define VENDING_MACHINE_IS_IN_FINALSTATE0(instance)((((&instance)->stateVar==FinalState0)) ? (1U) : (0U))


/* Helper returning the innermost active state.*/
VENDING_MACHINE_STATES_T vending_machineGetInnermostActiveState(VENDING_MACHINE_INSTANCEDATA_T *instanceVar);

#endif
