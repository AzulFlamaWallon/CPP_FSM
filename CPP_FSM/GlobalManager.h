#pragma once

#include "Global.h"

class GlobalManager
{
private:
	static GlobalManager*	m_Inst;
	GlobalManager() {};
	~GlobalManager() {};
public:
	static GlobalManager*	CreateInst();
	static GlobalManager*	GetInst();
	static void				DeleteInst();
};