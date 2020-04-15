#pragma once

template<typename T>
__interface IState
{
	void UpdateState(float _ElapsedTime);
	void Render();
	void OnEnter(T _Pdata);
	void OnExit();
};

