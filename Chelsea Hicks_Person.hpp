/***********************************************************************
** Author:		Chelsea Hicks
** Date:		10/31/2018
** Description:		This is the class specification file for the 
**			implementation file Person.cpp.
***********************************************************************/

#ifndef PERSON_HPP
#define PERSON_HPP

#include <string>

//Person class declaration
class Person
{	
	//Declaring the two data members of the class Person
	private:
		std::string name;
		double age;
	//Declaring the constructor and two get methods for date members
	public:
		Person(std::string, double);
		std::string getName();
		double getAge();
};

#endif
