#include<iostream>
#include "Czy_liczba_pierwsza.h"
#include<locale.h>
#include<cstdlib>
#include"Silnia.h"
#include"NWD.h"
#include"Rownanie_kwadratowe.h"
#include<math.h>

using namespace std;

int liczba;
int main() {
	setlocale(LC_CTYPE, "polish");

	cout << "Witaj! Podaj liczb�, kt�r� chcesz sprawdzi� czy jest pierwsza: " << liczba << endl;
	bool pierwsza = czy_liczba_pierwsza(7);
	//cout<<"Podana liczba to: "<<

	nwd(12, 15);
	cout << "Najwi�kszy wsp�lny dzielnik dla podanych liczb, to: " << endl;//tutaj musz� wczyta� 

	silnia(3);
	cout << "Silnia podanej liczby wynosi: " << endl;//wczyta�

	miejsca_zerowe(a, b, c);
	system("Pause");

}