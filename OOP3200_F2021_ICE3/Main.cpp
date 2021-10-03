/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	Following along with video and code provided by Tom Tsiliopoulos for the course OOP3200,
 *			focusing on the concepts of inheritance and polymorphism.
 */

#include <iostream>
#include <vector>

#include "Professor.h"
#include "Student.h"

int main()
{

	Student student = Student("Peter", "Parker", 20.0f, "PP123456789");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;
	
	Professor professor = Professor("Norman", "Osborne", 40.0f, "NO123456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;


	/* Dynamically allocating memory with objects */
	// Vector like a 'super array' which allows more control.
	std::vector<Person*> people;

	// Professor of type Person
	people.push_back(new Professor("Bruce", "Wayne", 32.0f, "BW123456789"));
	// Can't use . accessor, user pointer notation.
	people[0]->SaysHello();
	std::cout << people[0]->ToString() << std::endl;

	// Student of type Person, Student & Professor added to same vector.
	people.push_back(new Student("Harvey", "Dent", 38.0f, "HD123456789"));
	people[1]->SaysHello();
	// people[1]->Studies(); - does not work, vector does not 'know about students' only persons/People
	std::cout << people[1]->ToString() << std::endl;
	
}
/* When allocating memory, it happens in different places:
 * On the stack: Student student = Student("Peter", "Parker", 20.0f, "PP123456789");
 * On the heap:  people.push_back(new Student("Harvey", "Dent", 38.0f, "HD123456789"));
 * Raw memory management: using the new and delete keywords. Smart pointers?
 */

