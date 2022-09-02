
#include "stdafx.h"
#include <iostream>
#include <conio.h>


using namespace std;

int main()
{
	char str[10] = "";
	int i = 0;

	cout << "Hex to Decimal => 1\nDecimal To Hex => 2";
	cin >> i;

	if (i == 1) 
	{
		cout << "Enter Hex Code:";
		cin >> str;
		long n = strtol(str, NULL, 16);

		sprintf_s(str, "%1d", n); // Converts entered hex code to decimal

		cout << str;
	}
	else if (i == 2)
	{
		int d;
		cout << "Enter Decimal Code:";
		cin >> d;
		
		sprintf_s(str, "%x", d); // Converts entered decimal code to hex

		if (strcmp(str, "cccccccc") == 0) // If entered value is not decimal, show error
			cout << "Wrong Decimal Number.";
		else
			cout << str;
	}
	



	_getch();
    return 0;
}

