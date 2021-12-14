#pragma once

#include<string>

using namespace std;

/*
ÊäÈë£ºs = "We are happy."
Êä³ö£º"We%20are%20happy."
*/

string replaceSpace(string s) 
{
	string res = "";
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == ' ')
		{
			res += "%20";
		}
		else
		{
			res += s[i];
		}
	}
	return res;
}

void test_JZ05_replaceSpace()
{
	string str1 = "We are happy.";
	string res1 = replaceSpace(str1);

	return;
}