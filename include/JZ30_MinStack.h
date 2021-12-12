#pragma once
#include<stack>
class MinStack {
public:
	/** initialize your data structure here. */
	MinStack() {

	}

	void push(int x) {
		_stack.push(x);
		if (_min_stack.empty() || x <= _min_stack.top())
		{
			_min_stack.push(x);
		}
	}

	void pop() {
		if (!_stack.empty())
		{
			if (_stack.top() == _min_stack.top())
			{
				_min_stack.pop();
			}
			_stack.pop();
		}

	}

	int top() {
		return _stack.top();
	}

	int min() {
		if (!_min_stack.empty())
		{
			return _min_stack.top();
		}
		return 0;
	}

private:
	std::stack<int> _stack;
	std::stack<int> _min_stack;
};


void test_JZ30_MinStack()
{
	//MinStack *pMinStack = new MinStack();
	//pMinStack->push(-2);
	//pMinStack->push(0);
	//pMinStack->push(-3);

	//int param_1 = pMinStack->min();

	//pMinStack->pop();

	//int param_2 = pMinStack->top();
	//int param_3 = pMinStack->min();

	MinStack *pMinStack = new MinStack();
	pMinStack->push(2);
	pMinStack->push(0);
	pMinStack->push(3);
	pMinStack->push(0);

	int param_1 = pMinStack->min();
	pMinStack->pop();

	int param_2 = pMinStack->min();
	pMinStack->pop();

	int param_3 = pMinStack->min();
	pMinStack->pop();

	int param_4 = pMinStack->min();

	return;
}