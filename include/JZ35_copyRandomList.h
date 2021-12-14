#pragma once

#include"com_datastruct.h"
#include<map>

class Node {
public:
	int val;
	Node* next;
	Node* random;

	Node(int _val) {
		val = _val;
		next = NULL;
		random = NULL;
	}
};

Node* createRandomList(std::vector<std::vector<int>> vecdata)
{
	if (vecdata.size() < 1)
	{
		return nullptr;
	}

	std::map<int, int> mapCurNodeIndexAndRandomIndex;
	Node* pHead = new Node(vecdata[0][0]);
	if (vecdata[0].size() == 2)
	{
		mapCurNodeIndexAndRandomIndex.insert(make_pair(0, vecdata[0][1]));
	}

	Node* pCurHead = pHead;

	for (int i = 1; i < vecdata.size(); i++)
	{
		pCurHead->next = new Node(vecdata[i][0]);
		pCurHead = pCurHead->next;

		if (vecdata[i].size() == 2)
		{
			mapCurNodeIndexAndRandomIndex.insert(make_pair(i, vecdata[i][1]));
		}
	}

	pCurHead = pHead;
	Node* pCurRandom = pHead;

	int nCurNodeIndex = 0;
	std::map<int, int>::iterator iter;
	for ( iter = mapCurNodeIndexAndRandomIndex.begin(); iter != mapCurNodeIndexAndRandomIndex.end(); iter++)
	{
		while (iter->first != nCurNodeIndex)
		{
			nCurNodeIndex++;
			pCurHead = pCurHead->next;
		}

		int nCurRandomIndex = 0;
		while (nCurRandomIndex != iter->second)
		{
			nCurRandomIndex++;
			pCurRandom = pCurRandom->next;
		}

		pCurHead->random = pCurRandom;

		pCurRandom = pHead;
	}

	return pHead;
}

Node* copyRandomList(Node* head) 
{
	if (head == nullptr)
	{
		return head;
	}

	Node* pNewHead = nullptr;
	Node* pCurNewHead = nullptr;

	map<int, int> mapCurNodeIndexAndRandomIndex;
	Node* pCurOldHead = head;

	int nCurNodeIndex = 0;
	while (pCurOldHead)
	{
		if (pCurNewHead)
		{
			pCurNewHead->next = new Node(pCurOldHead->val);
			pCurNewHead = pCurNewHead->next;
		}
		else
		{
			pNewHead = new Node(pCurOldHead->val);
			pCurNewHead = pNewHead;
		}

		if (pCurOldHead->random)
		{
			int nCurRandomIndex = 0;
			Node* pTemp = head;
			while (pCurOldHead->random != pTemp)
			{
				nCurRandomIndex++;
				pTemp = pTemp->next;
			}
			mapCurNodeIndexAndRandomIndex.insert(make_pair(nCurNodeIndex, nCurRandomIndex));
		}

		nCurNodeIndex++;
		pCurOldHead = pCurOldHead->next;
	}

	pCurNewHead = pNewHead;
	nCurNodeIndex = 0;
	map<int, int>::iterator iter;
	for ( iter = mapCurNodeIndexAndRandomIndex.begin(); iter != mapCurNodeIndexAndRandomIndex.end(); iter++)
	{
		while (iter->first != nCurNodeIndex)
		{
			nCurNodeIndex++;
			pCurNewHead = pCurNewHead->next;
		}

		int nCurRandomIndex = 0;
		Node* pCurRandom = pNewHead;
		while (nCurRandomIndex != iter->second)
		{
			nCurRandomIndex++;
			pCurRandom = pCurRandom->next;
		}

		pCurNewHead->random = pCurRandom;
	}

	return pNewHead; 
}

void test_JZ35_copyRandomList()
{
	vector<vector<int>> vecdata = { {7},{13,0 },{11,4},{10,2},{1,0} };
	Node* pTestNode1 = createRandomList(vecdata);

	Node* pRandom = copyRandomList(pTestNode1);

	return;
}