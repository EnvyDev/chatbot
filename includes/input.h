#pragma once
#include<iostream>
#include <cctype>
#include <algorithm>
using namespace std;
class Input
{
public:
	bool valid(string phrase)
	{
		std::transform(phrase.begin(), phrase.end(), phrase.begin(), to_lower());

//		phrase = tolower(phrase);
		if (phrase == " ")
		{
			return false;
		}/*
		if (phrase == wordX)
		{
			return false;
		}*/
		if (onList(phrase))
		{
			return false;
		}
		return true;
	}
	bool onList(string phrase)
	{
		for (int x = 0; x <= listSize -1; x++)
		{
			if (phrase == WordList[x])
			{
				return true;
			}
		}
		return false;
	}
};