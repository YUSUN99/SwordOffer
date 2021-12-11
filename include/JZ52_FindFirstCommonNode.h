#pragma once
#include"com_datastruct.h"




ListNode* FindFirstCommonNode(ListNode* pHead1, ListNode* pHead2) 
{
	if (pHead1 == nullptr || pHead2 == nullptr)
	{
		return nullptr;
	}

	ListNode* pCurHead1 = pHead1;

	while (pCurHead1)
	{
		ListNode* pCurHead2 = pHead2;

		while (pCurHead2)
		{
			if (pCurHead1 == pCurHead2)
			{
				return pCurHead2;
			}
			pCurHead2 = pCurHead2->next;
		}
		pCurHead1 = pCurHead1->next;
	}

	return nullptr;
}

void test_JZ52_FindFirstCommonNode()
{
	std::vector<int> l1_data = { 1,2,3 };
	std::vector<int> l2_data = { 4,5 };
	std::vector<int> com_data = { 6,7 };

	ListNode* pL1 = createList(l1_data);
	ListNode* pL2 = createList(l2_data);
	ListNode* pLCom = createList(com_data);

	pL1->next->next->next = pLCom;
	pL2->next->next = pLCom;

	printList(pL1);
	printList(pL2);

	ListNode *pTest = FindFirstCommonNode(pL1, pL2);



	printList(pTest);

	return ;
}