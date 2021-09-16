#ifndef _UTIL_HPP_
#define _UTIL_HPP_

#include "include/Faculty.hpp"
#include "include/Student.hpp"
#include "include/Teacher.hpp"
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

void Continue();


void addStudent(std::vector<student> &Student);
void addTeacher(std::vector<teacher> &Teacher);
void addFaculty_Staff(std::vector<faculty> &Staff);

void display_students(std::vector<student> &Student);
void display_teachers(std::vector<teacher> &Teacher);
void display_faculty(std::vector<faculty> &Staff);

void remove_student(std::vector<student> &Student);
void remove_teacher(std::vector<teacher> &Teacher);
void remove_facultyStaff(std::vector<faculty> &Staff);

//void grade_student();

void displayMenu();
void Process(size_t choice, std::vector<student> &Student, std::vector<teacher> &Teacher, std::vector<faculty> &Staff);
void DisplayElements1();
void DisplayElements2();
void DisplaySection();



#endif
