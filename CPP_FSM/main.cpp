#include "GlobalManager.h"

int main()
{
	GlobalManager* globalmgr;
	globalmgr->CreateInst();
	globalmgr->GetInst();
	globalmgr->DeleteInst();

	return 0;
}