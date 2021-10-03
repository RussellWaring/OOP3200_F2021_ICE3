/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	Derived from the person class. Implementation file.
 */

#pragma once

#ifndef _STUDENT_H
#define _STUDENT_H

#include "Person.h"
#include <string>

class Student: public Person {
public: 
    
/// <summary>
/// Student constructor
/// </summary>
/// <param name="first_name"></param>
/// <param name="last_name"></param>
/// <param name="age"></param>
/// <param name="student_id"></param>
Student(const std::string& first_name, const std::string& last_name, float age, std::string student_id);
~Student();
    
std::string getStudentID() const;
    
/**
 * @param value
 */
void setStudentID(const std::string& value);
    
void Studies() const;
    
std::string ToString() override;

	
private: 
    std::string m_studentID;
};

#endif //_STUDENT_H