#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

const double pi = 3.14;

float licz_obwod( float r) {
	int wybor;
	cout <<endl<< "Aby obliczy� obw�d ko�a wybierz: "<<endl;
	cout <<endl<< "1 - �rednica" <<endl;
	cout << "2 - Promie�" << endl;
	cout <<endl<< "Wybierz: " << endl;
	cin >> wybor;

	switch (wybor) {
	case 1:
		cout << "Obw�d = " << pi*r << endl;
	break;
	case 2:
		cout << "Obw�d = " << 2 * pi*r << endl;
	break;
	default: cout << "Z�y wyb�r." << endl;
	}
	return 0;
}
