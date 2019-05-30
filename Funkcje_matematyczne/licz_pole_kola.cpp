#include<iostream>
#include<math.h>

using namespace std;

const float pi = 3.14;


float licz_pole( float r) {
	if (r < 0) {
		cout << "Promieñ nie mo¿e byæ ujemny!" << endl;
	}
	else
		
		cout <<endl<< "Pole ko³a wynisi: " << pi * pow(r, 2) << endl;
	return 0;
}