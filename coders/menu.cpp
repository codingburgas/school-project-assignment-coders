#include "menu.h"

bool check(string username, string password, string userFile, string passFile)
{
    ifstream file(userFile);
    ifstream file1(passFile);

    string storedUsername;
    string storedPassword;

    while (file >> storedUsername && file1 >> storedPassword)
    {
        if (storedUsername == username)
        {
            if (storedPassword == password)
            {
                file.close();
                file1.close();
                return storedPassword == password;
            }
        }
    }

    file.close();
    file1.close();
    return false;
}

void login()
{
    string username, password, path;
    char character;

    cout << endl << "Enter your username: ";
    cin >> username;

    cout << endl << "Enter your password: ";
    while ((character = _getch()) != '\r')
    {
        cout << "*";
        password += character;
    }

    if (check(username, password, "names.txt", "passwords.txt"))
    {
        system("cls");

        path = "acc.txt";

        cout << "Welcome";
    }
    else
    {
        cout << endl << "Invalid username or password. Please try again" << endl;
        login();
    }
}

bool checkPass(string password)
{
    if (password.length() < 8)
    {
        cout << "Password should be at least 8 characters long." << endl;
        return false;
    }
    else
        return true;
}

void enterPass(string newPass, string confirmPass)
{
    cout << endl << "Enter password: ";
    cin >> newPass;
    if (checkPass(newPass))
    {
        cout << endl << "Confirm your password: ";
        cin >> confirmPass;
        if (newPass == confirmPass)
        {
            ofstream out1("passwords.txt", std::ios_base::app);
            if (out1.is_open())
            {
                out1 << newPass << endl;
                out1.close();
            }
        }
        else
        {
            cout << endl << "Password confirmation is not correct!" << endl;
            enterPass(newPass, confirmPass);
        }
    }
    else
    {
        enterPass(newPass, confirmPass);
    }
}

void reg()
{
    
    string confirmPass, newPass, newName, path;
    

    cout << endl << "Enter username: ";

    ofstream out("names.txt", ios_base::app);
    if (out.is_open())
    {
        string username;
        cin >> username;
        out << username << endl;
        out.close();
        newName = username;
        enterPass(newPass, confirmPass);
    }
    
    system("cls");
    char numLog;
    
    cout << "You have to login to continue." << endl << "Would you like to continue? (Y/N or y/n)   Type only the letter" << endl;
    cout << "Enter your answer:";
    cin >> numLog;
    if (numLog == 'Y' || numLog == 'y')
    {
        system("cls");
        path = "../../textFiles/login.txt";
        //displayFunc(path);
        login();
    }
    else if (numLog == 'N' == numLog == 'n')
    {
        exit(0);
    }
    else
    {
        cout << "Wrong input. Try again:";
    }           
}

void mainMenu()
{
    char answer;
    string path;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    if (answer == '1')
    {
        system("cls");
        path = "register.txt";
        login();
    }
    else if (answer == '2')
    {
        system("cls");
        path = "login.txt";
        reg();
    }
    else if (answer == '0')
    {
        exit(0);
    }
    else
    {
        system("cls");
        cout << "Invalid input" << endl;
        mainMenu();

    }

}
