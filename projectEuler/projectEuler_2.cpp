//PROBLEM 2 :
//Each new term in the Fibonacci sequence is generated by adding 
//the previous two terms. by starting with 1 and 2, the first 10 terms will be:
//1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ... by considering the terms in the 
//fibonacci sequence whose values do not exceed four million, find the sum of 
//the even - valued terms
/*
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
*/
