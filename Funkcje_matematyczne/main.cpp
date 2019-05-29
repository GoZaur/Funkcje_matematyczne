#include<iostream>

#include "Czy_liczba_pierwsza.h"
/*#include<locale.h>
#include<cstdlib>
#include"Silnia.h"
#include"NWD.h"
#include"Rownanie_kwadratowe.h"
#include<math.h>
#include"Czy_mozna_zbudowac_trojkat.h"
#include "licz_pole_kola.h"
*/
#include"licz_pole_kola.h"
#include"licz_obwod_kola.h"
using namespace std;

int liczba;
int a, b, c;

int main() {
	setlocale(LC_CTYPE, "polish");
	/*
	cout << "Witaj! Podaj liczbê, któr¹ chcesz sprawdziæ czy jest pierwsza: " << liczba << endl;
	//bool
	int pierwsza = czy_liczba_pierwsza(7);
	//cout<<"Podana liczba to: "<<

	nwd(12, 15);
	cout << "Najwiêkszy wspólny dzielnik dla podanych liczb, to: " << endl;//tutaj muszê wczytaæ 

	silnia(3);
	cout << "Silnia podanej liczby wynosi: " << endl;//wczytaæ

	//miejsca_zerowe(a, b, c);

	int trojkat = czy_mozna_zbudowac_trojkat(5, 3, 7);
		cout << "Trójk¹t o podanych wymiarach: " << trojkat << endl;
	*/
	float wynik = licz_pole(4.0);
	//float wynik2 = licz_obwod(5.0);
	bool wynik3 = czy_liczba_pierwsza(2);

	cout<<std::boolalpha<<wynik3 << endl;


	system("Pause");

}