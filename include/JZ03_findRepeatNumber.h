#pragma once

#include <vector>
#include <unordered_map>
using namespace std;

/*
ÊäÈë£º
[2, 3, 1, 0, 2, 5, 3]
Êä³ö£º2 »ò 3
*/


int findRepeatNumber1(vector<int>& nums)
{
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = i + 1; j < nums.size(); j++)
		{
			if (nums[i] == nums[j])
			{
				return nums[i];
			}
		}
	}
}

int findRepeatNumber(vector<int>& nums)
{
	unordered_map<int, bool> map;
	for (int i = 0; i < nums.size(); i++)
	{
		if (map[nums[i]])
		{
			return nums[i];
		}
		map[nums[i]] = true;
	}
	return -1;
}

void test_JZ03_findRepeatNumber()
{
	vector<int> test1 = { 2,3,1,0,2,5,3 };

	int res = findRepeatNumber(test1);

	return;
}