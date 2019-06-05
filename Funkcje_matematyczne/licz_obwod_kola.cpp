#include<iostream>
#include<math.h>
#include<iomanip>

using namespace std;

const double pi = 3.14;

float licz_obwod() {
	int wybor;
	int promien;
	int srednica;
	cout <<endl<< "Aby obliczyæ obwód ko³a wybierz: "<<endl;
	cout <<endl<< "1 - Œrednica" <<endl;
	cout << "2 - Promieñ" << endl;
	cout <<endl<< "Wybierz: " << endl;
	cin >> wybor;
	
	switch (wybor) {
	case 1:
		cout << "Podaj d³ugoœæ promienia: "<< endl;
		cin >> promien;
		cout << "Obwód = " << 2 * pi*promien << endl;
	break;
	case 2:
		cout << "Podaj d³ugoœæ œrednicy: " << endl;
		cin >> srednica;
		cout << "Obwód = " << pi*srednica << endl;
	break;
	default: cout << "Z³y wybór." << endl;
	}
	return 0;
}
