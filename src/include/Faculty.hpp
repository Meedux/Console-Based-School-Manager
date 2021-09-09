#ifndef _FACULTY_HPP_
#define _FACULTY_HPP_

#include "School.hpp"

class faculty: public School{
    friend std::ostream &operator<<(std::ostream &os, const faculty &person);
    protected:
    std::string name;
    std::string section{"Faculty Staff"};
    int age;

    public:
    faculty(std::string Name = "Unnamed Faculty Member", int Age = 0): name{Name}, age{Age} {}
    bool operator==(const faculty &person){
        return this->name == person.name;
    }
    virtual std::string getName() override;
    virtual std::string getSection() override;
    virtual int getAge() override;
    virtual ~faculty();
};

#endif 