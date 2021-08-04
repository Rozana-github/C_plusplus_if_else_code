#include <iostream>
using namespace std;

int main()
{

	float weight_kg;
	float height_m;
	float bmi;
	cout << "enter height:" << endl;
	cin >> height_m;
	cout << "enter weight:" << endl;
	cin >> weight_kg;
	bmi = weight_kg / height_m * weight_kg;

	if (bmi < 18.5)
		cout << "underweight ." << endl;

	else if (bmi > 25)

		cout << "Overweight." << endl;

	else

		cout << "normal weight." << endl;

	system("pause>0");
}

//this program runs correctly on cmd