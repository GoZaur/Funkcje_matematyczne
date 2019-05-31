#include<iostream>

using namespace std;

bool czy_mozna_zbudowac_trojkat(int a, int b, int c) {

	if ((a + b > c)&&(a + c > b)&&(b + c > a)) {
		return true;
	}
	else return false;
}