#include<iostream>
#include<locale.h>
using namespace std;
int a;
int b;
int nwd(int a, int b) {
	do {
		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	} while (a != b);
	cout << "Najwi�kszy wsp�lny dzielnik to: " << a << endl;
	system("Pause");
}