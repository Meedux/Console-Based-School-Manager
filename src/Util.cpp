#include "Util.hpp"

void Continue(){
    std::cout << std::endl;
    std::cin.get();
    std::system("clear");
}

void addStudent(std::vector<student> &Student){
    std::system("clear");
    std::string name;
    std::string section;
    int age;

    std::cout << "Enter Student's Name: ";
    std::getline(std::cin, name);
    std::system("clear");

    std::cout << "Enter Student's Age: ";
    std::cin >> age;
    std::system("clear");

    std::cout << "Enter Student's Section: ";
    std::cin >> section;
    std::system("clear");

    Student.push_back(student{name, section, age});

    std::cout << "Student Successfully Created!" << std::endl;
    Continue();
}

void addTeacher(std::vector<teacher> &Teacher){
    std::system("clear");
    std::string name;
    std::string section;
    int age;

    std::cout << "Enter Teacher's Name: ";
    std::getline(std::cin, name);
    std::system("clear");

    std::cout << "Enter Teacher's Age: ";
    std::cin >> age;
    std::system("clear");

    std::cout << "Enter Teacher's Section: ";
    std::cin >> section;
    std::system("clear");

    Teacher.push_back(teacher{name, section, age});

    std::cout << "Teacher Successfully Created" << std::endl;
    Continue();
}

void addFaculty_Staff(std::vector<faculty> &Staff){
    std::system("clear");
    std::string name;
    std::string section;
    int age;

    std::cout << "Enter Staff's Name: ";
    std::getline(std::cin, name);
    std::system("clear");

    std::cout << "Enter Staff's Age: ";
    std::cin >> age;
    std::system("clear");

    std::cout << "Staff Successfully Created" << std::endl;

    Staff.push_back(faculty{name, age});
    Continue();
}

void display_students(std::vector<student> &Student){
    std::cout << std::setw(8) << "Name" << std::setw(90) << "Section" << std::endl
              << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ');

    size_t j{1};

    for(size_t i{}; i <= Student.size(); i++)
    {
        std::cout << '[' << j << ']' << (Student.at(i)).getName() << std::setw(90) << (Student.at(i)).getSection() << std::endl;
        j++;
    }
}

void display_teachers(std::vector<teacher> &Teacher){
    std::cout << std::setw(8) << "Name" << std::setw(90) << "Section" << std::endl
              << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ');

    size_t j{1};

    for(size_t i{}; i <= Teacher.size(); i++)
    {
        std::cout << '[' << j << ']' << (Teacher.at(i)).getName() << std::setw(90) << (Teacher.at(i)).getSection() << std::endl;
        j++;
    }
}

void display_faculty(std::vector<faculty> &Staff){
    std::cout << std::setw(8) << "Name" << std::setw(90) << "Age" << std::endl
              << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ');

    size_t j{1};

    for(size_t i{}; i <= Staff.size(); i++)
    {
        std::cout << '[' << j << ']' << (Staff.at(i)).getName() << std::setw(90) << (Staff.at(i)).getSection() << std::endl;
        j++;
    }
}

void remove_student(std::vector<student> &Student){
    display_students(Student);

    size_t choice{};

    std::cout << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << "Student to remove: ";
    std::cin >> choice;

    choice -= 1;
    Student.erase(Student.begin() + choice);

    system("clear");
    Continue();
}

void remove_teacher(std::vector<teacher> &Teacher){
    display_teachers(Teacher);

    size_t choice{};

    std::cout << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << "Teacher to remove: ";
    std::cin >> choice;

    choice -= 1;
    Teacher.erase(Teacher.begin() + choice);

    system("clear");
    Continue();
}

void remove_facultyStaff(std::vector<faculty> &Staff){
    display_faculty(Staff);

    size_t choice{};

    std::cout << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << "Staff to remove: ";
    std::cin >> choice;

    choice -= 1;
    Staff.erase(Staff.begin() + choice);

    system("clear");
    Continue();
}

void displayMenu()
{
    std::cout << "TEST TITLE" << std::endl;
    std::cout << std::setw(90) << std::setfill('-') << "-" << std::endl;
    std::cout << std::setfill(' ');
    std::cout << "(1)" << "One" << std::endl;
    std::cout << "(2)" << "Two" << std::endl;
    std::cout << "(3)" << "Three" << std::endl;
    std::cout << "(4)" << "Four" << std::endl;
    std::cout << "(5)" << "Five" << std::endl;
    std::cout << "(0)" << "Exit" << std::endl;
}

void Process(size_t choice, std::vector<student> &Student, std::vector<teacher> &Teacher, std::vector<faculty> &Staff){
    switch(choice)
    {
        case 1:{
            std::system("clear");
            std::cout << "Its a One" << std::endl;
            Continue();
            break;
        }
        case 2:{
            std::system("clear");
            std::cout << "Its a Two" << std::endl;
            Continue();
            break;
        }
        case 3:{
            std::system("clear");
            std::cout << "Its a Three" << std::endl;
            Continue();
            break;
        }
        case 4:{
            std::system("clear");
            std::cout << "Its a Four" << std::endl;
            Continue();
            break;
        }
        case 5:{
            std::system("clear");
            std::cout << "Its a Five" << std::endl;
            Continue();
            break;
        }
        case 0:{
            std::system("clear");
            std::cout << "Goodbye!" << std::endl;
            Continue();
            break;
        }
        default:{
            std::cerr << "Invalid Choice Please Try Again..!" << std::endl;
            Continue();
        }
    }
}
