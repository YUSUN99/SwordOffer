#pragma once
#include <vector>

using namespace std;


/*
ʾ�� 1:

һ������Ϊn-1�ĵ������������е��������ֶ���Ψһ�ģ�
����ÿ�����ֶ��ڷ�Χ0��n-1֮�ڡ�
�ڷ�Χ0��n-1�ڵ�n������������ֻ��һ�����ֲ��ڸ������У����ҳ�������֡�


����: [0,1,3]
���: 2

����: [0,1,2,3,4,5,6,7,9]
���: 8
*/

int missingNumber(vector<int>& nums) 
{
	for (int i  = 0; i < nums.size(); i++)
	{
		if (i != nums[i])
		{
			return i;
		}
	}

	return nums.size();
}

void test_JZ53_missingNumber()
{
	vector<int> test1 = { 0, 1 };
	int res1 = missingNumber(test1);

	vector<int> test2 = { 0,1,2,3,4,5,6,7,9 };
	int res2 = missingNumber(test2);

	return;
}