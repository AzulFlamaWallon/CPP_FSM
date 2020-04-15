#pragma once

#include "Global.h"
#include "CBaseEventData.h"

struct StateMapRow
{
	const CBaseState* const State;
};

struct StateMapRowEx
{
	const CBaseState* const State;
};

class CBaseState
{
public:
	virtual void InvokeStateAction(StateMachine* sm, const CBaseEventData* data) const = 0;
};

class StateMachine
{
private:
	const BYTE MAX_STATES;
	BYTE m_currentState;
	BYTE m_newState;
	BOOL m_eventGenerated;
	const CBaseEventData* m_pEventData;

	virtual const StateMapRow* GetStateMap() = 0;
	virtual const StateMapRowEx* GetStateMapEx() = 0;

	void SetCurrentState(BYTE newState) { m_currentState = newState; }

	void StateEngine();
	void StateEngine(const StateMapRow* pStateMap);
	void StateEngine(const StateMapRowEx* pStateMapEx);

protected:
	void ExternalEvent(BYTE _NewState, const CBaseEventData* _Data);
	void InternalEvent(BYTE _NewState, const CBaseEventData* _Data);

public:
	enum
	{
		NULL_EVENT = -1,
		CANNOT_PROBLOM  = 1
	};

	StateMachine(BYTE _MaxStates, BYTE _InitState = 0);
	virtual ~StateMachine(){}

	BYTE GetSelectState();
};