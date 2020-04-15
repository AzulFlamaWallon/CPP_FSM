#include "GlobalManager.h"

GlobalManager* GlobalManager::m_Inst = nullptr;

GlobalManager* GlobalManager::CreateInst()
{
	if (m_Inst == nullptr)
	{
		m_Inst = new GlobalManager();
	}
	return m_Inst;
}

GlobalManager* GlobalManager::GetInst()
{
	return m_Inst;
}

void GlobalManager::DeleteInst()
{
	if (m_Inst != nullptr)
	{
		delete m_Inst;
		m_Inst = nullptr;
	}
}
