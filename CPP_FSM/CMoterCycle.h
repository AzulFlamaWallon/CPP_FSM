#pragma once
#include "StateMachine.h"

class CMoterCycleData : public CBaseEventData
{
public:
	int speed;
};

class CMoterCylce : public StateMachine
{
public:
	CMoterCylce();

	void SetSpeed(CMoterCycleData* _Data);
	void Halt();
private:
	int m_SelectSpeed;

};