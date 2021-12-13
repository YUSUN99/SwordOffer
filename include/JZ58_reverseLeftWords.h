#pragma once

#include <string>

using namespace std;


/*
����: s = "abcdefg", k = 2
���: "cdefgab"

����: s = "lrloseumgh", k = 6
���: "umghlrlose"
*/

string reverseLeftWords(string s, int n) 
{
	return s.substr(n) + s.substr(0, n);
}


void test_JZ58_reverseLeftWords()
{
	string str1 = "abcdefg";  int k1 = 2;
	string res1 = reverseLeftWords(str1, k1);

	string str2 = "lrloseumgh"; int k2 = 6;
	string res2 = reverseLeftWords(str2, k2);

	return;
}