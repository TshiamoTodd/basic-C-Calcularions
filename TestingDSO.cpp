// TestingDSO.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <iomanip>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	float x;
	int k = 10;
	int m = 25;

	x = (k - 7) ^ 3 + m * 2 / (k - 6);
	m = m + 2;
	k = k - 20;

	cout << "x = " << x << endl;
	cout << "m = " << m << endl;
	cout << "k = " << k << endl;

	system("pause");

	return 0;
}

