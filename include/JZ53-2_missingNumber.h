#pragma once
#include <vector>

using namespace std;


/*
示例 1:

一个长度为n-1的递增排序数组中的所有数字都是唯一的，
并且每个数字都在范围0～n-1之内。
在范围0～n-1内的n个数字中有且只有一个数字不在该数组中，请找出这个数字。


输入: [0,1,3]
输出: 2

输入: [0,1,2,3,4,5,6,7,9]
输出: 8
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