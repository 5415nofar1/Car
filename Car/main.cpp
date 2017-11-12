#include <iostream>
#include "Car.h"

/*
	Writen by Nofar Ben Harush.
	Car exercise.
*/


int main()
{
	char make[NAME_SIZE] = "";
	char model[NAME_SIZE] = "";
	size_t year = 0;
	size_t enginVolume = 0;
	char color[NAME_SIZE] = "";

	// input car details
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

	// print cars
	cout << endl << "------------ cars ------------" << endl;

	Car car1(make, model, year, enginVolume, color);
	cout << "Your car:" << endl << car1;

	Car car2("Ford", "Focus", 2017, 1600, "White");
	cout << "Second car:" << endl << car2;

	// compare cars
	cout << endl << "--------- compare car ---------" << endl << endl;

	Compare olderRst = Car::compareYear(car1, car2);
	cout << "The older car: " << ((olderRst >= 0) ? car1 : car2) << endl;

	Compare biggerRst = Car::compareEnginVolume(car1, car2);
	cout << "The bigger car: " << ((biggerRst >= 0) ? car1 : car2) << endl;


	return 0;
}


