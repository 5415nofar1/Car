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
const char* Car::getMake() const
{ 
	return m_make;
}

// get model value
const char* Car::getModel() const
{
	return m_model;
}

// get color value
const char* Car::getColor() const
{
	return m_color;
}


// change make value
void Car::setMake(const char* make) 
{ 
	if (make)
	{
		strncpy(m_make, make, NAME_SIZE);
		m_make[NAME_SIZE] = '\0';
	}
}

// set model value
void Car::setModel(const char* model)
{
	if (model)
	{
		strncpy(m_model, model, NAME_SIZE);
		m_model[NAME_SIZE] = '\0';
	}
}

// set color value
void Car::setColor(const char* color) 
{ 
	if (color)
	{
		strncpy(m_color, color, NAME_SIZE);
		m_color[NAME_SIZE] = '\0';
	}
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
Compare Car::compareYear(const Car & car1, const Car & car2)
{
	Compare result = Compare::equal;

	if (car1.getYear() > car2.getYear())
	{ 
		result = Compare::bigger;
	}
	else if (car1.getYear() < car2.getYear())
	{
		result = Compare::smaller;
	}

	return result;
}

// compare cars by engin volume
Compare Car::compareEnginVolume(const Car & car1, const Car & car2)
{
	Compare result = Compare::equal;

	if (car1.getEnginVolume() > car2.getEnginVolume())
	{
		result = Compare::bigger;
	}
	else if (car1.getEnginVolume() < car2.getEnginVolume())
	{
		result = Compare::smaller;
	}

	return result;
}