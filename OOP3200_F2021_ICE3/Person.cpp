/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */


#include "Person.h"

#include <iostream>

/**
 * Person implementation
 */


/**
 * @param first_name
 * @param last_name
 * @param age
 */
Person::Person(std::string first_name, std::string last_name, const float age)
	: m_age(age), m_firstName(std::move(first_name)), m_lastName(std::move(last_name))
{

}

Person::~Person()
= default;

/**
 * @return float
 */
float Person::GetAge() const
{
    return m_age;
}

/**
 * @param value
 */
void Person::SetAge(const float value)
{
    m_age = value;
}

/**
 * @return std::string
 */
std::string Person::GetFirstName() const
{
    return m_firstName;
}

/**
 * @param value
 */
void Person::SetFirstName(const std::string& value)
{
    m_firstName = value;
}

/**
 * @return std::string
 */
std::string Person::GetLastName() const
{
    return m_lastName;
}

/**
 * @param value
 */
void Person::SetLastName(const std::string& value)
{
    m_lastName = value;
}

/**
 * @return void
 */
void Person::SaysHello() const
{
    std::cout << GetFirstName() << " says Hello!" << std::endl;
}


/**
 * @return std::string
 */

std::string Person::ToString()
{
    std::string output_string;

    output_string += "-------------------------------------------\n";
    output_string += "First Name: " + GetFirstName() + "\n";
    output_string += "Last Name : " + GetLastName() + "\n";
    output_string += "Age       : " + std::to_string(GetAge()) + "\n";
    output_string += "-------------------------------------------\n";
	
    return output_string;
}

