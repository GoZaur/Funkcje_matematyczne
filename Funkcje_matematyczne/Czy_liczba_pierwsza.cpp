#include<iostream>

using namespace std;
int liczba;
//int liczba_pierwsza1 = true;
//int liczba_pierwsza0 = false;
bool czy_liczba_pierwsza(int liczba) {
	if ((liczba % 1 == 0) && (liczba%liczba == 0)) {
		return true;
	}
	else  return false;
}
