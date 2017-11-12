#pragma once
#include "Car.h"
#include <cstring>
#include <iostream>
//#include <string>

using namespace std;

#define NAME_SIZE 10
#define MIN_YEAR 1990
#define MIN_ENGINE_VOLUME 1400

enum Compare {
	smaller = -1,
	equal = 0,
	bigger = 1
};


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
	const char* getMake() const;
	const char* getModel() const;
	size_t getYear() const { return m_year; }
	size_t getEnginVolume() const { return m_engineVolume; }
	const char* getColor() const;

	// mutators
	void setMake(const char*);
	void setModel(const char*);
	void setYear(size_t);
	void setEnginVolume(size_t);
	void setColor(const char*);

	// operators
	friend ostream& operator<<(ostream& os, const Car& c);

	//compare methods
	static Compare compareYear(const Car & car1, const Car & car2);
	static Compare compareEnginVolume(const Car & car1, const Car & car2);

};