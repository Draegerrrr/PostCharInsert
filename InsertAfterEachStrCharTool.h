#pragma once

#include <iostream>
#include <string>
using namespace std;

void GetInput(const string& errmessage, string outputVar)
{
	while (true)
	{
		cin >> outputVar;
		if (outputVar == "")
		{
			cout << errmessage << endl;
			continue;
		}
		else
		{
			break;
		}
	}
}