#include<iostream>
#include<cstdlib>
#include<iomanip>

using namespace std;

unsigned long long silnia2(unsigned long long n) {
	
	if (n == 0) return 1;
	else return n *silnia2 (n - 1);
	cout << setprecision(9999999999999999999);
}