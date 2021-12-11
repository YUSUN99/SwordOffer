#pragma once
#include<iostream>
#include<vector>

struct ListNode 
{
	int val;
	struct ListNode *next;
	ListNode(int x) :val(x), next(NULL) {}
};


ListNode* createList(std::vector<int> vec_data)
{
	if (vec_data.size() < 1)
	{
		return nullptr;
	}
	
	ListNode *pHead = new ListNode(vec_data[0]);
	ListNode *pCurNode = pHead;

	for (int i = 1; i < vec_data.size(); i++)
	{
		pCurNode->next = new ListNode(vec_data[i]);
		pCurNode = pCurNode->next;
	}

	return pHead;
}

void printList(ListNode* head)
{
	if (head == nullptr)
	{
		std::cout << "head is null" << std::endl;
	}

	while (head)
	{
		std::cout << head->val << "  ";

		head = head->next;
	}

	std::cout << std::endl;
	return;
}
