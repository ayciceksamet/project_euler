// projectEuler2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
int main()
{
	int first = 0;
	int second = 1;
	int buffer;
	int sum = 0;
	int result;
	do{
		
	    result = first + second;
		second = first;
		first = result;
		cout << "degerler :" << result << endl;

		if (result % 2 == 0) {
			sum = sum + result;
		}
		
	} while (result < 40);


	cout << "toplam :" << sum << endl;

	system("pause");
    return 0;
}

