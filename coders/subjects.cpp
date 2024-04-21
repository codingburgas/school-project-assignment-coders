#include "subjects.h"
#include "PhysicsTest.h"

void mathematics()
{
    std::cout << "Mathematics";
}

void english()
{
    std::cout << "English";
}

void geography()
{
    std::cout << "Geography";
}

void biology()
{
    std::cout << "Biology";
}

void history()
{
    std::cout << "History";
}

void physics()
{
    std::cout << "Physics Test Starting..." << std::endl;
    startPhysicsTest();
}

void subjects()
{
    std::cout << std::endl;
    std::cout << "Choose a subject";
    std::cout << std::endl;
    std::cout << "1. Mathematics" << std::endl;
    std::cout << "2. English" << std::endl;
    std::cout << "3. Geography" << std::endl;
    std::cout << "4. Biology" << std::endl;
    std::cout << "5. History" << std::endl;
    std::cout << "6. Physics" << std::endl;
    std::cout << "0. Exit" << std::endl;

    char choice;
    std::cin >> choice;

    switch (choice)
    {
    case '1': mathematics(); break;
    case '2': english(); break;
    case '3': geography(); break;
    case '4': biology(); break;
    case '5': history(); break;
    case '6': physics(); break;
    case '0': exit(0);
    default:
        std::cout << std::endl << std::endl;
        std::cout << "You must choose a number between 1, 2, 3, 4, 5, 6, and 0 for the corresponding function!" << std::endl;
        std::cout << std::endl << std::endl;
        subjects();
    }
 
}
