#include<iostream>


using namespace std;
int czy_mozna_zbudowac_trojkat(int a, int b, int c) {
	bool t = 0;
	bool f = 1;
	if (a + b > c) {
		//cout << "istnieje";
		return true;
	}
	else if (a + c > b) {
		return true;
	}
	else if (c + b > a) {
		return 0;
	}
	else return false;
}