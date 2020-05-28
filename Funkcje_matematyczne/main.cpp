#include<iostream>
#include "Czy_liczba_pierwsza.h"
#include<cstdlib>
#include"Silnia.h"
#include"NWD.h"
#include"Rownanie_kwadratowe.h"
#include<math.h>
#include"Czy_mozna_zbudowac_trojkat.h"
#include"licz_pole_kola.h"
#include"licz_obwod_kola.h"
#include"silnia2.h"

using namespace std;

int main() {
	setlocale(LC_CTYPE, "polish");

	bool wynik3 = czy_liczba_pierwsza(4);
	
	int wynik_NWD=nwd(15, 15);
	cout << endl<<"Najwiêkszy wspólny dzielnik dla podanych liczb to: " <<wynik_NWD<< endl;

	unsigned long long  wynik_silni = silnia(10);
	cout << endl<<"Wynik silni wynosi:" << wynik_silni << endl;

	float wynik_rownania_kwadratowego = miejsca_zerowe(1, 10, 9);
	cout << endl<<wynik_rownania_kwadratowego << endl;

	bool wynik_czy_trojkat_istnieje = czy_mozna_zbudowac_trojkat(31, 3, 3);
	cout << std::boolalpha << endl<<"Trójk¹t o podanych danych istnieje:" << wynik_czy_trojkat_istnieje << endl;
	
	float wynik2 = licz_obwod();

	float wynik = licz_pole();

	//unsigned long long wynik_silni2=silnia2(100);
	//cout << endl << "Silnia2= " << wynik_silni2 << endl;


	system("Pause");

}