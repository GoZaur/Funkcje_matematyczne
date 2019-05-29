#include<iostream>
#include<math.h>

using namespace std;

float miejsca_zerowe(float a, float b, float c) /*{ return 0; }*/{ //musialm zmienic na float. Potrzebowalam zmiennych tego samego typu co zmienna x0 linijka 12
	float delta;
	delta = (b*b) - (4 * a*c);

	if (delta = 0) {
		float x0;
		cout << "Rozwi¹zanie ma jedno miejsce zerowe." << delta << endl;

		x0 = -b / (2 * a);
		cout << "Miejscem zerowym funkcji jest: " << x0 << endl;
	}
	else if (delta > 0) {
		float x1;
		float x2;
		cout << "Rozwi¹zanie ma dwa miejsca zerowe." << delta << endl;

		x1 = (-b - sqrt(delta)) / (2 * a);
		x2 = (-b + sqrt(delta)) / (2 * a);

		cout << "Miejscami zerowymi funkcji s¹: " << x1 << "i" << x2 << endl;
	}
	else if(delta<0) {
		cout << "Brak miejsc zerowych.";
	}
	return 0;
}
