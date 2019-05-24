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

	cout << "Witaj! Podaj liczbê, któr¹ chcesz sprawdziæ czy jest pierwsza: " << liczba << endl;
	bool pierwsza = czy_liczba_pierwsza(7);
	//cout<<"Podana liczba to: "<<

	nwd(12, 15);
	cout << "Najwiêkszy wspólny dzielnik dla podanych liczb, to: " << endl;//tutaj muszê wczytaæ 

	silnia(3);
	cout << "Silnia podanej liczby wynosi: " << endl;//wczytaæ

	miejsca_zerowe(a, b, c);
	system("Pause");

}