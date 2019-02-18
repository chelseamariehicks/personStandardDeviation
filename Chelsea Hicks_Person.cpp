/************************************************************************
** Author:		Chelsea Hicks
** Date:		10/31/2018
** Description:		This is the Person class function implementation
**			file using the Person.hpp interface.
************************************************************************/

#include "Person.hpp"
#include <string>

//Constructor to initialize data members
Person::Person(std::string person, double years)
{
	name = person;
	age = years;
}

//Function returns the string in member variable name
std::string Person::getName()
{
	return name;
}

//Function returns the value in member variable age
double Person::getAge()
{
	return age;
}


