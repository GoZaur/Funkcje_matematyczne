#include<iostream>
#include<cstdlib>
using namespace std;
int n; //podana liczba przez u¿ytkownika
int wynik; // wynik silni
int silnia(int n) {
	//for (i = 1; i <= n; i++)
		//wynik = silnia * i;
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}