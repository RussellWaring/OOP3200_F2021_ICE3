/**
 * Project OOP3200_F2021_ICE3
 * @author Russell Waring
 * @version 1.0
 * @date	2021-10-03
 * @desc	The base class for a set of derived classes.
 */

#pragma once
#ifndef _PERSON_H
#define _PERSON_H
#include <string>

class Person {
public: 

/// <summary>
/// Person constructor
/// </summary>
/// <param name="first_name"></param>
/// <param name="last_name"></param>
/// <param name="age"></param>
Person(std::string first_name, std::string last_name, float age);
virtual ~Person() = 0; // Virtual Destructor, marked as 'pure virtual'. Need to give this a body to avoid unresolved external

	
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

// changing private to protected will permit access to the member variables from the child classes. Not a good practice. OOP methodologies we should encapsulated or info-hide our super class & use our getters and setters instead.
private: 
    float m_age;
    std::string m_firstName;
    std::string m_lastName;
};

#endif //_PERSON_H