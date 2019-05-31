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
	cout << "Najwiêkszy wspólny dzielnik to: " << a << endl;
	return a;
	//cout << "Najwiêkszy wspólny dzielnik to: " << a << endl;
	//system("Pause");
}