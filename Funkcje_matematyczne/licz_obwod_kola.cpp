#include<iostream>
#include<math.h>

using namespace std;

const double pi = 3.14;

float licz_obwod( float r) {
	char wybor;
	cout << "1 - �rednica" << endl;
	cout << "2 - Promie�" << endl;
	cout << "Wybierz: " << endl;
	cin >> wybor;

	
	switch (wybor) {
	case 49:
		cout << "Obw�d = " << pi*r << endl;
	break;
	case 2:
		cout << "Obw�d = " << 2 * pi*r << endl;
	break;
	default: cout << "Z�y wyb�r.";
	}
	return 0;
}
