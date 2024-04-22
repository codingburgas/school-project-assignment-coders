#include "menu.h" // Including necessary header files
#include "subjects.h"

void printTitle()
{
    cout << " ____  ____  ____  _____ ____  ____ " << endl;
    cout << "/   _\\/  _ \\/  _ \\/  __//  __\\/ ___\\  " << endl;
    cout << "|  /  | / \\|| | \\||  \\  |  \\/||    \\  " << endl;
    cout << "|  \\__| \\_/|| |_/||  /_ |    /\\___ |  " << endl;
    cout << "\\____/\\____/\\____/\\____\\\\_/\\_\\\\____/  " << endl;
    cout << endl;
}

// Function to check the validity of username and password
bool check(string username, string password, string userFile, string passFile)
{
    // Open files for reading
    ifstream file(userFile);
    ifstream file1(passFile);

    string storedUsername;
    string storedPassword;

    // Read usernames and passwords from files
    while (file >> storedUsername && file1 >> storedPassword)
    {
        // Check if the username matches
        if (storedUsername == username)
        {
            // If username matches, check if password matches
            if (storedPassword == password)
            {
                // Close files and return true if password matches
                file.close();
                file1.close();
                return storedPassword == password;
            }
        }
    }

    // Close files and return false if no match found
    file.close();
    file1.close();
    return false;
}

// Function to handle user login
void login()
{
    string username, password;
    char character;

    // Prompt for username
    cout << endl << "Enter your username: ";
    cin >> username;

    // Prompt for password (hidden)
    cout << endl << "Enter your password: ";
    while ((character = _getch()) != '\r')
    {
        cout << "*";
        password += character;
    }

    // Check if username and password are valid
    if (check(username, password, "userDataFiles/names.txt", "userDataFiles/passwords.txt"))
    {
        // If valid, clear screen and proceed
        system("cls");
        cout << "Welcome" << endl;
        subjects();
    }
    else
    {
        // If invalid, prompt again
        cout << endl << "Invalid username or password. Please try again" << endl;
        login();
    }
}

// Function to check password length
bool checkPass(string password)
{
    if (password.length() < 8)
    {
        // Password length should be at least 8 characters
        cout << "Password should be at least 8 characters long." << endl;
        return false;
    }
    else
        return true;
}

// Function to enter and confirm password during registration
void enterPass(string newPass, string confirmPass)
{
    cout << endl << "Enter password: ";
    cin >> newPass;
    if (checkPass(newPass))
    {
        // If password meets requirements, prompt for confirmation
        cout << endl << "Confirm your password: ";
        cin >> confirmPass;
        if (newPass == confirmPass)
        {
            // If confirmation matches, store password in file
            ofstream out1("userDataFiles/passwords.txt", std::ios_base::app);
            if (out1.is_open())
            {
                out1 << newPass << endl;
                out1.close();
            }
        }
        else
        {
            // If confirmation doesn't match, prompt again
            cout << endl << "Password confirmation is not correct!" << endl;
            enterPass(newPass, confirmPass);
        }
    }
    else
    {
        // If password doesn't meet requirements, prompt again
        enterPass(newPass, confirmPass);
    }
}

// Function for user registration
void reg()
{
    string confirmPass, newPass, newName;

    // Prompt for username and store in file
    cout << endl << "Enter username: ";
    ofstream out("userDataFiles/names.txt", ios_base::app);
    if (out.is_open())
    {
        string username;
        cin >> username;
        if (username.length() >= 4)
        {
            out << username << endl;
            out.close();
            newName = username;
            // Proceed to enter password
            enterPass(newPass, confirmPass);
        }
        else
        {
            system("cls");
            cout << "Username must be at least 4 characters long!" << endl;
            reg();
        }
    }

    // Prompt to continue with login or exit
    system("cls");
    char numLog;

    cout << "You have to login to continue." << endl << "Would you like to continue? (Y/N or y/n)   Type only the letter" << endl;
    cout << "Enter your answer:";
    cin >> numLog;
    if (numLog == 'Y' || numLog == 'y')
    {
        // If yes, proceed to login
        system("cls");
        login();
    }
    else if (numLog == 'N' || numLog == 'n')
    {
        // If no, exit program
        exit(0);
    }
    else
    {
        // If invalid input, prompt again
        cout << "Wrong input. Try again:";
    }
}

// Function for main menu
void mainMenu()
{
    printTitle();

    char answer;
    cout << "1. Login" << endl;
    cout << "2. Register" << endl;
    cout << "0. Exit" << endl;
    cout << "Enter answer: ";
    cin >> answer;

    // Check user input and proceed accordingly
    if (answer == '1')
    {
        // If login chosen, proceed to login
        system("cls");
        login();
    }
    else if (answer == '2')
    {
        // If register chosen, proceed to registration
        system("cls");
        reg();
    }
    else if (answer == '0')
    {
        // If exit chosen, exit program
        exit(0);
    }
    else
    {
        // If invalid input, prompt again
        system("cls");
        cout << "Invalid input" << endl;
        mainMenu();
    }
}
