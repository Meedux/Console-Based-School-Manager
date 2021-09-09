#ifndef _TEACHER_HPP_
#define _TEACHER_HPP_
#include "School.hpp"

class teacher: public School{
    friend std::ostream &operator<<(std::ostream &os, teacher &person);
    private:
    std::string name;
    std::string section;
    int age;

    public:
    teacher(std::string nameVal = "Unnamed Teacher", std::string sectionVal = "Unnamed Section", int ageVal = 0): name{nameVal}, section{sectionVal}, age{ageVal} {}
    bool operator==(const teacher &person) const{
        return this->section == person.section;
    }
    virtual std::string getName() override;
    virtual int getAge() override;
    virtual std::string getSection() override;
    virtual ~teacher();
};



#endif