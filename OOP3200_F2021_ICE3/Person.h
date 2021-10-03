/**
 * Project OOP3200-F2020-Lesson4
 * @author Tom Tsiliopoulos
 * @version 1.0
 */

#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public: 
    
/**
 * @param first_name
 * @param last_name
 * @param age
 */

Person(std::string first_name, std::string last_name, float age);
virtual ~Person() = 0; // need to give this a body to avoid unresolved external

	
float GetAge() const;
    
/**
 * @param value
 */
void SetAge(float value);
    
std::string GetFirstName() const;
    
/**
 * @param value
 */
void SetFirstName(const std::string& value);
    
std::string GetLastName() const;
    
/**
 * @param value
 */
void SetLastName(const std::string& value);
    
void SaysHello() const;
    
virtual std::string ToString();
	
private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H