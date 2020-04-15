#pragma once

#include "Global.h"
#include "IState.h"


class CStateMachine
{
private:
	map<char*, IState<CStateMachine>> m_State = new map<char*, IState<CStateMachine>>();
	IState<CEmptyState> m_CurrentState = new CEmptyState();
public:
	
};

class CEmptyState : IState<CEmptyState>
{
public:
	virtual void UpdateState(float _ElapsedTime);
	virtual void Render();
	virtual void OnEnter(CEmptyState _Pdata);
	virtual void OnExit();
};