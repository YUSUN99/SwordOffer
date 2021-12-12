#pragma once

#include"com_datastruct.h"

ListNode* reverseList(ListNode* head) 
{
	if (head == nullptr || head->next == nullptr)
	{
		return head;
	}

	ListNode* pCurHead = head;

	ListNode* pRevHead = new ListNode(pCurHead->val);

	pCurHead = pCurHead->next;
	while (pCurHead)
	{
		ListNode* pTemp = new ListNode(pCurHead->val);
		pTemp->next = pRevHead;
		pRevHead = pTemp;

		pCurHead = pCurHead->next;
	}

	return pRevHead;
}


void test_JZ24_reverseList()
{
	std::vector<int> test1 = { 1,2,3,4,5 };
	ListNode* pL1 = createList(test1);

	ListNode* pRevL = reverseList(pL1);

	return;
}