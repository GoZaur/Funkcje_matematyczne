#include<iostream>
#include<math.h>

using namespace std;

const double pi = 3.14;

float licz_obwod( float r) {
	char wybor;
	cout << "1 - Œrednica" << endl;
	cout << "2 - Promieñ" << endl;
	cout << "Wybierz: " << endl;
	cin >> wybor;

	
	switch (wybor) {
	case 49:
		cout << "Obwód = " << pi*r << endl;
	break;
	case 2:
		cout << "Obwód = " << 2 * pi*r << endl;
	break;
	default: cout << "Z³y wybór.";
	}
	return 0;
}
