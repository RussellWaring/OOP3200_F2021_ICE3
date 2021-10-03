/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	Derived from the person class. Student implementation.
 */

#include "Student.h"

#include <iostream>

/**
 * Student implementation
 */



/// <summary>
/// Student constructor
/// </summary>
/// <param name="first_name"></param>
/// <param name="last_name"></param>
/// <param name="age"></param>
/// <param name="student_id"></param>
Student::Student(const std::string& first_name, const std::string& last_name, const float age, std::string student_id)
: Person(first_name, last_name, age), m_studentID(std::move(student_id))
{
}

Student::~Student()
= default;

/**
 * @return std::string
 */
std::string Student::GetStudentID() const
{
    return m_studentID;
}

/**
 * @param value
 */
void Student::SetStudentID(const std::string& value)
{
    m_studentID = value;
}

/**
 * @return void
 */
void Student::Studies() const
{
    std::cout << GetFirstName() << " is studying" << std::endl;
}

/**
 * @return std::string
 */
std::string Student::ToString()
{
    std::string output_string;

    output_string += Person::ToString();
    output_string += "-------------------------------------------\n";
    output_string += "Student ID: " + GetStudentID() + "\n";
    output_string += "-------------------------------------------\n";
	
    return output_string;
}