#include "Teacher.hpp"

teacher::~teacher()
{
    
}

std::string teacher::getName()
{
    return name;
}

int teacher::getAge()
{
    return age;
}

std::string teacher::getSection()
{
    return section;
}

std::ostream &operator<<(std::ostream &os, teacher &person)
{
    os << "Name: " << person.name << std::endl
       << "Section: " << person.section << std::endl;
    return os;
}

