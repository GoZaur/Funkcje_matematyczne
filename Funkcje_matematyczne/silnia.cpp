#include<iostream>
#include<cstdlib>

using namespace std;

int silnia(int n) {
	//for (i = 1; i <= n; i++) {
	// silnia * i;
	
	if (n == 0) return 1;
	else return n * silnia(n - 1);
}