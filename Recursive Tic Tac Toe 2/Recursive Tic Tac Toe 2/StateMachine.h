#pragma once
#include <stack>
#include "State.h"

class StateMachine
{
public:
	StateMachine(State* initialState);
	~StateMachine();
	void Update();
	void Draw();
	void PushState(State* newState);
	void PopState();
	void PopStates(int num);
	void ProcessMouseEvent();
	void ProcessKeyboardEvent();
	void ProcessControllerEvent();
	State* GetCurrentState();
	int count();
private:
	std::stack<State*> states;
};
