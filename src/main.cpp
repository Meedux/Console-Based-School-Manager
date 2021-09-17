#include "Util.hpp"

std::vector<student> Students;
std::vector<teacher> Teachers;
std::vector<faculty> Faculty_Staff;

int main()
{
    size_t choice{1};
    while(choice != 0)
    {
        displayMenu();
        std::cout << "Choice: ";
        std::cin >> choice;
        std::cin.get();
        Process(choice, Students, Teachers, Faculty_Staff);
    }

    return 0;
}
