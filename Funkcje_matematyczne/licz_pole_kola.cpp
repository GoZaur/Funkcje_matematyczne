#include<iostream>
#include<math.h>

using namespace std;

const double pi = 3.14;


float licz_pole() {
	 
	int promien;
	float pole_kola;
	cout << "Podaj d�ugo�� promienia: " << endl;
	cin >> promien;
	if (promien < 0) {
		cout << "Promie� nie mo�e by� ujemny!" << endl;
	}
	else
		pole_kola = pi * pow(promien, 2);
		cout <<endl<< "Pole ko�a wynisi: " <<pole_kola  << endl;
	return pole_kola;
}