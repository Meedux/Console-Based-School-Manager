#ifndef _STUDENT_HPP_
#define _STUDENT_HPP_
#include "School.hpp"

class student: public School{
    friend std::ostream &operator<<(std::ostream &os, const student &person);
    private:

    std::string name;
    std::string section;
    int age;  
    
      
    public:

    bool operator==(const student &person){
        return this->section == person.section;
    }
    student(std::string Name = "Unnamed Student", std::string Section = "Unnamed Section", int Age = 0) : name{Name}, section{Section}, age{Age} {}
    virtual std::string getName() override;
    virtual std::string getSection() override;
    virtual int getAge() override;
    virtual ~student();
};

#endif