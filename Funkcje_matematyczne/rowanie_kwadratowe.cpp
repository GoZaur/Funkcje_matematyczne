#include<iostream>
#include<math.h>

using namespace std;

float miejsca_zerowe(float a, float b, float c) { 

	float delta = (b*b) - (4 * a*c);

	if (delta == 0) {
		float jedno_miejsce_zerowe;
		cout << "Rozwi¹zanie ma jedno miejsce zerowe. Delta =" << delta << endl;

		jedno_miejsce_zerowe = -b / (2 * a);
		cout << "Miejscem zerowym funkcji jest: " << jedno_miejsce_zerowe << endl;
	}
	else if (delta > 0) {
		float pierwsze_miejsce_zerowe;
		float drugie_miejsce_zerowe;
		cout << endl<<"Rozwi¹zanie ma dwa miejsca zerowe. Delta = " << delta << endl;

		pierwsze_miejsce_zerowe = (-b - sqrt(delta)) / (2 * a);
		drugie_miejsce_zerowe = (-b + sqrt(delta)) / (2 * a);

		cout << "Miejscami zerowymi funkcji s¹: " << pierwsze_miejsce_zerowe << " i " << drugie_miejsce_zerowe<< endl;
	}
	else if(delta<0) {
		cout <<endl<< "Brak miejsc zerowych." << endl;
	}
	return 0;
}
