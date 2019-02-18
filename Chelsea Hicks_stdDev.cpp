/***********************************************************************
** Author:		Chelsea Hicks
** Date:		10/31/2018
** Description:		This program includes a function that takes in an
**			array of Person objects and returns the standard
**			deviation of all the ages.
***********************************************************************/

#include "Person.hpp"
#include <cmath>
#include <iostream>
#include <string>

/*Function to calculate the standard deviaton of the ages of the Person 
objects. */
double stdDev(Person array[], int size)
{
	double avgAge = 0.0,
		   var = 0.0,
		   stdDev = 0.0;

	//Find the average of the ages of the Person objects
	for (int count = 0; count < size; count++)
	{	
		avgAge += array[count].getAge();
	}
	avgAge /= size;

	/*Find the difference from the average for each data value, square
	 each difference, add together to get the sum of squares,
	 and divide the sum of squares by the number of values, size,
	 to calculate the variance. */
	for (int count = 0; count < size; count++)
	{
		var += pow((array[count].getAge() - avgAge), 2);
	}
	var /= size;

	//Find the standard deviation by taking the square root of var
	stdDev = sqrt(var);

	return stdDev;
}

/*
int main()
{
	const int size = 4;

	Person person1("Oliver", 36);
	Person person2("Dan", 30);
	Person person3("Jan", 8);
	Person person4("Annie", 20);

	Person array[size] = { person1, person2, person3, person4 };

	std::cout << "The standard deviation is: " << stdDev(array, size);
	std::cout << std::endl;
	
	return 0;
}
*/
