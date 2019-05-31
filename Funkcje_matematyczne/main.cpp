#include<iostream>
#include "Czy_liczba_pierwsza.h"
#include<locale.h>
#include<cstdlib>
#include"Silnia.h"
#include"NWD.h"
#include"Rownanie_kwadratowe.h"
#include<math.h>
#include"Czy_mozna_zbudowac_trojkat.h"
#include"licz_pole_kola.h"
#include"licz_obwod_kola.h"
//#include<locale>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "polish");

	bool wynik3 = czy_liczba_pierwsza(4);
	cout << std::boolalpha << "Podana liczba jest liczb¹ pierwsz¹: " << wynik3 << endl;
	
	int wynik_NWD=nwd(15, 15);
	cout << endl<<"Najwiêkszy wspólny dzielnik dla podanych liczb to: " <<wynik_NWD<< endl;

	int wynik_silni = silnia(17);
	cout << endl<<"Wynik silni wynosi:" << wynik_silni << endl;

	float wynik_rownania_kwadratowego = miejsca_zerowe(1, 10, 9);
	cout << endl<<wynik_rownania_kwadratowego << endl;

	bool wynik_czy_trojkat_istnieje = czy_mozna_zbudowac_trojkat(31, 3, 3);
	cout << std::boolalpha << "Trójk¹t o podanych danych istnieje:" << wynik_czy_trojkat_istnieje << endl;
	
	//std::cout.imbue(std::locale("pl"));
	float wynik2 = licz_obwod(5.0);

	float wynik = licz_pole(4.0);

	system("Pause");

}