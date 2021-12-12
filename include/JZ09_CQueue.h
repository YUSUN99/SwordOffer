#pragma once
#include<stack>

class CQueue {
public:
	CQueue() {
		
	}

	void appendTail(int value) {
		_appendStack.push(value);
	}

	int deleteHead() {
		if (!_deleteStack.empty())
		{
			int res = _deleteStack.top();
			_deleteStack.pop();
			return res;
		}
		else if (!_appendStack.empty())
		{
			while (!_appendStack.empty())
			{
				int n = _appendStack.top();
				_deleteStack.push(n);
				_appendStack.pop();
			}
			int res = _deleteStack.top();
			_deleteStack.pop();
			return res;
		}
		return -1;
	}

private:
	std::stack<int> _appendStack;
	std::stack<int> _deleteStack;
};


void test_JZ09_CQueue()
{
	CQueue *pTestQue1 = new CQueue();
	pTestQue1->appendTail(3);
	int nQ1_de1 = pTestQue1->deleteHead();
	int nQ1_de2 = pTestQue1->deleteHead();

	CQueue *pTestQue2 = new CQueue();
	int nQ2_de1 = pTestQue1->deleteHead();
	pTestQue2->appendTail(5);
	pTestQue2->appendTail(2);
	int nQ2_de2 = pTestQue2->deleteHead();
	int nQ2_de3 = pTestQue2->deleteHead();


	return;
}