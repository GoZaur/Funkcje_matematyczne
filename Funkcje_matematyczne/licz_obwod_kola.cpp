#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

const double pi = 3.14;

float licz_obwod( float r) {
	int wybor;
	cout <<endl<< "Aby obliczyæ obwód ko³a wybierz: "<<endl;
	cout <<endl<< "1 - Œrednica" <<endl;
	cout << "2 - Promieñ" << endl;
	cout <<endl<< "Wybierz: " << endl;
	cin >> wybor;

	switch (wybor) {
	case 1:
		cout << "Obwód = " << pi*r << endl;
	break;
	case 2:
		cout << "Obwód = " << 2 * pi*r << endl;
	break;
	default: cout << "Z³y wybór." << endl;
	}
	return 0;
}
