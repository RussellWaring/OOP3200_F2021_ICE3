/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	Derived from the person class. Implementation file.
 */

#pragma once

#ifndef _PROFESSOR_H
#define _PROFESSOR_H

#include "Person.h"
#include <string>

class Professor: public Person {
public: 
    
/// <summary>
/// Professor constructor
/// </summary>
/// <param name="first_name"></param>
/// <param name="last_name"></param>
/// <param name="age"></param>
/// <param name="employee_id"></param>
Professor(const std::string& first_name, const std::string& last_name, float age, std::string employee_id);
~Professor();
    
std::string GetEmployeeID() const;
    
/**
 * @param value
 */
void SetEmployeeID(const std::string& value);
    
void Teaches() const;
    
std::string ToString() override;
	
private: 
    std::string m_employeeID;
};

#endif //_PROFESSOR_H