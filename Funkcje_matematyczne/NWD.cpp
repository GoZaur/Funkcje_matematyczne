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
	//cout << "Najwi�kszy wsp�lny dzielnik to: " << a << endl;
	//system("Pause");
}