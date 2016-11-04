//PROBLEM 3 :The prime factors of 13195 are 5, 7, 13 and 29.
//What is the largest prime factor of the number 600851475143 ?

#include <iostream>

using namespace std;
int main() {

	const double number = 600851475143;
	long largestPrimeFactor = 0;
	bool isPrime;
	for (double i = 2; i < number ; i++) {
		cout << "Hello " << endl;
		if (number % i == 0) { //Tam bolunebiliyor mu ?

			for (int j = 2; j < i; j++){
				if (i % j != 0) { //Asal Sayi mi ?

					largestPrimeFactor = i;
					cout << "LargestPrimeFactor : " << largestPrimeFactor << endl;

				}
			}
		}
		
		
	}


	system("pause");
}