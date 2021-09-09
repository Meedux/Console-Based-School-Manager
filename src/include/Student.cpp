#include "Student.hpp"

student::~student()
{
    
}

std::ostream &operator<<(std::ostream &os, const student &person)
{
    os << "Name: " << person.name << std::endl 
       << "Section: " << person.section << std::endl;
    return os;
}

std::string student::getName(){
    return this->name;
}

std::string student::getSection()
{
    return this->section;
}

int student::getAge(){
    return this->age;
}