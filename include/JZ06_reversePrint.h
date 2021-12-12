#pragma once
#include"com_datastruct.h"

#include<stack>

using namespace std;


/*
 ‰»Î£∫head = [1,3,2]
 ‰≥ˆ£∫[2,3,1]
*/

vector<int> reversePrint(ListNode* head)
{
	vector<int> res = { };
	stack<int> _stack;

	while (head)
	{
		_stack.push(head->val);
		head = head->next;
	}

	while (!_stack.empty())
	{
		res.push_back(_stack.top());
		_stack.pop();
	}

	return res;
}


void test_JZ06_reversePrint()
{
	vector<int> test1 = { 1,3,2 };
	ListNode* pTestNode1 = createList(test1);

	vector<int> res = reversePrint(pTestNode1);

	return;
}