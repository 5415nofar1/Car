#include <iostream>
#include "Car.h"


int main()
{
	char make[NAME_SIZE] = "";
	char model[NAME_SIZE] = "";
	size_t year = 0;
	size_t enginVolume = 0;
	char color[NAME_SIZE] = "";

	cout << "Please enter car details:" << endl;
	cout << "Make:";
	cin >> make;
	cout << "Model:";
	cin >> model;
	cout << "Year:";
	cin >> year;
	cout << "Engin volume:";
	cin >> enginVolume;
	cout << "Color:";
	cin >> color;


	Car car1(make, model, year, enginVolume, color);
	cout << "\tYour car:" << endl << car1;

	Car car2("Ford", "Focus", 2017, 1600, "White");
	cout << "\tSecond car:" << endl << car2;


	cout << "===========" << endl;
	cout << "The older car:" << endl;
	const Car* older = Car::compareYear(&car1, &car2);
	cout << *older;

	cout << "The bigger car:" << endl;
	const Car* bigger = Car::compareEnginVolume(&car1, &car2);
	cout << *bigger;

	return 0;
}


