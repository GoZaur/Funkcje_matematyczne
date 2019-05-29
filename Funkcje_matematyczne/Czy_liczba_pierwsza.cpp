#include<iostream>

using namespace std;

bool czy_liczba_pierwsza(int liczba) {
	if ((liczba % 1 == 0) && (liczba%liczba == 0)) {
		return true;
	}
	else { 
		return false; 
	}
}
