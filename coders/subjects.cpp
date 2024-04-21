#include "subjects.h"
#include "tests.h"

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







void subjects()
{
    std::cout << std::endl;
    std::cout << "Choose a subject" << endl;
    std::cout << std::endl;
    std::cout << "1. Mathematics" << std::endl;
    std::cout << "2. English" << std::endl;
    std::cout << "3. Geography" << std::endl;
    std::cout << "4. Biology" << std::endl;
    std::cout << "5. History" << std::endl;
    std::cout << "6. Physics" << std::endl;
    std::cout << "0. Exit" << std::endl;

    char choice;
    cin >> choice;

    if (choice == '1')
        mathematics();
    else if (choice == '2')
        english();
    else if (choice == '3')
        geography();
    else if (choice == '4')
        biologyTest();
    else if (choice == '5')
        historyTest();
    else if (choice == '6')
        physicsTest();
    else if (choice == '0')
        exit(0);
    else subjects();

 
}
