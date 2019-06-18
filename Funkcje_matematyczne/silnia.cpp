#include<iostream>
#include<cstdlib>

using namespace std;

unsigned long long silnia(unsigned long long n) {
	
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}