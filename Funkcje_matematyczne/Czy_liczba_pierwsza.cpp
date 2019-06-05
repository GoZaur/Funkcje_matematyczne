#include <iostream>
using namespace std;

bool czy_liczba_pierwsza(int liczba) {
	int  i;
	bool isPrime = true;

	for (i = 2; i <= liczba / 2; ++i)
	{
		if (liczba % i == 0)
		{
			isPrime = false;
			break;
		}
	}
	if (isPrime)
		cout << "This is a prime number"<<endl;
	else
		cout << "This is not a prime number"<<endl;

	return isPrime;
}