#ifndef _SCHOOL_HPP_
#define _SCHOOL_HPP_

#include <iostream>
#include <algorithm>
#include <string>

class School{
    public:
    virtual std::string getName() = 0;
    virtual std::string getSection() = 0;
    virtual int getAge() = 0;

};

#endif