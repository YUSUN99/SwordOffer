#pragma once

#include <vector>
using namespace std;

/*
输入: nums = [5,7,7,8,8,10], target = 8
输出: 2

输入: nums = [5,7,7,8,8,10], target = 6
输出: 0
*/

int search(vector<int>& nums, int target)
{
	int res = 0;
	for (int i = 0; i < nums.size(); i++)
	{
		if (target == nums[i])
		{
			res++;
		}
	}

	return res;
}


void test_JZ53_search()
{
	vector<int> test1 = { 5,7,7,8,8,10 };
	int target1 = 8;
	int res1 = search(test1,target1);

	vector<int> test2 = { 5,7,7,8,8,10 };
	int target2 = 6;
	int res2 = search(test2, target2);

	return;
}