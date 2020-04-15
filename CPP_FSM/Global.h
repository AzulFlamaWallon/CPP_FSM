#pragma once

#include <iostream>
#include <Windows.h>
#include <map>
#include "EMotionState.h"

using namespace std;

template<typename T1, typename T2, typename T3>
constexpr auto STATE_DEFINE(T1 Motor, T2  Stop, T3  NoEventData)
{
	cout << "Motor::ST_Stop" << endl;
	m_currentSpeed = 0;

	// perform the stop motor processing here
	// transition to Idle via an internal event
	InternalEvent(S_IDLE);
}