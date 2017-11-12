#include "Car.h"

// ctor
Car::Car(char* make, char* model, size_t year, size_t enginVolume, char* color)
{
	setMake(make);
	setModel(model);
	setYear(year);
	setEnginVolume(enginVolume);
	setColor(color);
}

// copy ctor
Car::Car(const Car& c)
{
	setMake(c.getMake());
	setModel(c.getModel());
	setYear(c.getYear());
	setEnginVolume(c.getEnginVolume());
	setColor(c.getColor());
}

// get make value
char* Car::getMake() const&
{ 
	char *cpy = (char*)malloc(sizeof(char) * NAME_SIZE);
	strncpy(cpy, m_make, NAME_SIZE);
	return cpy; 
}

// get model value
char* Car::getModel() const&
{
	char* cpy = (char*)malloc(sizeof(char) * NAME_SIZE);
	strncpy(cpy, m_model, NAME_SIZE);
	return cpy;
}

// get color value
char* Car::getColor() const&
{
	char *cpy = (char *)malloc(sizeof(char) * NAME_SIZE);
	strncpy(cpy, m_color, NAME_SIZE);
	return cpy;
}


// change make value
void Car::setMake(char* make) 
{ 
	strncpy(m_make, make, NAME_SIZE); 
	m_make[NAME_SIZE] = '\0';
}

// set model value
void Car::setModel(char* model)
{
	strncpy(m_model, model, NAME_SIZE);
	m_model[NAME_SIZE] = '\0';
}

// set color value
void Car::setColor(char* color) 
{ 
	strncpy(m_color, color, NAME_SIZE); 
	m_color[NAME_SIZE] = '\0';
}

// sat make value
void Car::setYear(size_t year) 
{ 
	m_year = MIN_YEAR;

	if (MIN_YEAR < year )
	{
		m_year = year;
	}
}

// get engin volume value
void Car::setEnginVolume(size_t enginVolume) 
{ 
	m_engineVolume = MIN_ENGINE_VOLUME;

	if (MIN_ENGINE_VOLUME < enginVolume)
	{
		m_engineVolume = enginVolume;
	}
	
}

// print car
ostream & operator<<(ostream & os, const Car & car)
{
	os << car.getMake();
	os << ", " << car.getModel();
	os << ", " << car.getYear();
	os << ", " << car.getEnginVolume();
	os << ", " << car.getColor() << endl;

	return os;
}

// compare cars by year
const Car* Car::compareYear(const Car * car1, const Car * car2)
{
	const Car * result = car1;

	if (car1->getYear() > car2->getYear())
		result = car2;

	return result;
}

// compare cars by engin volume
const Car* Car::compareEnginVolume(const Car * car1, const Car * car2)
{
	const Car * result = car1;

	if (car1->getEnginVolume() < car2->getEnginVolume())
		result = car2;

	return result;
}