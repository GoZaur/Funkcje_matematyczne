#include<iostream>
#include<locale.h>

using namespace std;

int nwd(int a, int b) {
	do {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	} while (a != b);
	return a;
	//cout << "Najwiêkszy wspólny dzielnik to: " << a << endl;
	//system("Pause");
}