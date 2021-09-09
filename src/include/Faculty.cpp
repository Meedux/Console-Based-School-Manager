#include "Faculty.hpp"

faculty::~faculty()
{

}

std::string faculty::getName()
{
    return this->name;
}

std::string faculty::getSection()
{
    return this->section;
}

int faculty::getAge()
{
    return this->age;
}

std::ostream &operator<<(std::ostream &os, const faculty &person)
{
    os << person.section << std::endl
       << "-------------------------" << std::endl
       << "Name: " << person.name << std::endl
       << "Age: " << person.age << std::endl;
    return os;
}