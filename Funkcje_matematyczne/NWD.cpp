#include<iostream>
#include<locale.h>

using namespace std;

int nwd(int a, int b) {

	while (a != b){

		if (a > b) {
			a -= b;
		}
		else {
			b -= a;
		}
	}
	cout << "Najwi�kszy wsp�lny dzielnik to: " << a << endl;
	return a;
	//cout << "Najwi�kszy wsp�lny dzielnik to: " << a << endl;
	//system("Pause");
}