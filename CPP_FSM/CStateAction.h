#pragma once

#include "StateMachine.h"

template <class SM, class Data, void (SM::*Func)(const Data*)>
class CStateAction : public CBaseState
{
public:
	virtual void InvokeStateAction(StateMachine* sm, const CBaseEventData* data) const
	{
		// Downcast the state machine and event data to the correct derived type
		SM* derivedSM = static_cast<SM*>(sm);

		// Dynamic cast the data to the correct derived type        
		const Data* derivedData = dynamic_cast<const Data*>(data);
		ASSERT_TRUE(derivedData != NULL);

		// Call the state function
		(derivedSM->*Func)(derivedData);
	}
};