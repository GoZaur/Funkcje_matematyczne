#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

const double pi = 3.14;

float licz_obwod() {
	int wybor;
	int promien;
	int srednica;
	cout <<endl<< "Aby obliczy� obw�d ko�a wybierz: "<<endl;
	cout <<endl<< "1 - �rednica" <<endl;
	cout << "2 - Promie�" << endl;
	cout <<endl<< "Wybierz: " << endl;
	cin >> wybor;
	
	switch (wybor) {
	case 1:
		cout << "Podaj d�ugo�� promienia: "<< endl;
		cin >> promien;
		cout << "Obw�d = " << 2 * pi*promien << endl;
	break;
	case 2:
		cout << "Podaj d�ugo�� �rednicy: " << endl;
		cin >> srednica;
		cout << "Obw�d = " << pi*srednica << endl;
	break;
	default: cout << "Z�y wyb�r." << endl;
	}
	return 0;
}
