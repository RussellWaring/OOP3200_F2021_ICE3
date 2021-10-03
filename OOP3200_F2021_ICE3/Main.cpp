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

	//std::cout << person.ToString() << std::endl;

	Student student = Student("Peter", "Parker", 20.0f, "PP123456789");
	student.SaysHello();
	student.Studies();

	std::cout << student.ToString() << std::endl;
	
	Professor professor = Professor("Norman", "Osborne", 40.0f, "NO123456789");
	professor.SaysHello();
	professor.Teaches();

	std::cout << professor.ToString() << std::endl;


	/* Dynamic Memory Allocaton with Objects */
	std::vector<Person*> people;

	people.push_back(new Professor("Alvaro", "Quevedo", 32.0f, "AQ123456789"));
	people[0]->SaysHello();
	std::cout << people[0]->ToString() << std::endl;

	people.push_back(new Student("Nick", "Smythe", 20.0f, "NS123456789"));
	people[1]->SaysHello();
	std::cout << people[1]->ToString() << std::endl;
	
}

