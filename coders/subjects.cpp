#include "subjects.h"
#include "tests.h"

void chemistry()
{
    std::cout << "chemistry";
}








void subjects()
{
    std::cout << std::endl;
    std::cout << "Choose a subject" << endl;
    std::cout << std::endl;
    std::cout << "1. Chemistry" << std::endl;
    std::cout << "2. Geography" << std::endl;
    std::cout << "3. Biology" << std::endl;
    std::cout << "4. History" << std::endl;
    std::cout << "5. Physics" << std::endl;
    std::cout << "0. Exit" << std::endl;

    char choice;
    cin >> choice;

    if (choice == '1')
        chemistryTest();
    else if (choice == '2')
        geographyTest();
    else if (choice == '3')
        biologyTest();
    else if (choice == '4')
        historyTest();
    else if (choice == '5')
        physicsTest();
    else if (choice == '0')
        exit(0);
    else subjects();

 
}
