#pragma once
#include "Car.h"
#include <cstring>
#include <iostream>
//#include <string>

using namespace std;

#define NAME_SIZE 10
#define MIN_YEAR 1990
#define MIN_ENGINE_VOLUME 1400


class Car {
private:
	char m_make[NAME_SIZE];
	char m_model[NAME_SIZE];
	size_t m_year;
	size_t m_engineVolume;
	char m_color[NAME_SIZE];

public:
	Car(char*, char*, size_t, size_t, char*);
	Car(const Car&);
	~Car() {};

	// accessors
	char* getMake() const&;
	char* getModel() const&;
	size_t getYear() const { return m_year; }
	size_t getEnginVolume() const { return m_engineVolume; }
	char* getColor() const&;

	// mutators
	void setMake(char*);
	void setModel(char*);
	void setYear(size_t);
	void setEnginVolume(size_t );
	void setColor(char* );

	// operators
	friend ostream& operator<<(ostream& os, const Car& c);

	//compare methods
	static const Car* compareYear(const Car * car1, const Car * car2);
	static const Car* compareEnginVolume(const Car * car1, const Car * car2);

};