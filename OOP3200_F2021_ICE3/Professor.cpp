/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	Derived from the person class. Professor implementation
 */

#include "Professor.h"


#include <iostream>
#include <utility>

/// <summary>
/// Professor Constructor
/// </summary>
/// <param name="first_name"></param>
/// <param name="last_name"></param>
/// <param name="age"></param>
/// <param name="employee_id"></param>
Professor::Professor(const std::string& first_name, const std::string& last_name, const float age, std::string employee_id):
	Person(first_name, last_name, age), m_employeeID(std::move(employee_id))
{
}

Professor::~Professor()
= default;

/**
 * @return std::string
 */
std::string Professor::GetEmployeeID() const
{
    return m_employeeID;
}

/**
 * @param value
 */
void Professor::SetEmployeeID(const std::string& value)
{
    m_employeeID = value;
}

/**
 * @return void
 */
void Professor::Teaches() const
{
    std::cout << GetFirstName() << " is teaching!" << std::endl;
}

/**
 * @return std::string
 */
std::string Professor::ToString() {
    std::string output_string;

    output_string += Person::ToString();
    output_string += "-------------------------------------------\n";
    output_string += "Employee ID: " + GetEmployeeID() + "\n";
    output_string += "-------------------------------------------\n";

    return output_string;
}