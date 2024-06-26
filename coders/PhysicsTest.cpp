﻿#include "tests.h" // Including necessary header files
#include "subjects.h"

// Function to conduct a physics test
void physicsTest()
{
    system("cls");
    cout << "This is the physics test" << endl;

    // Creating a QuestionBank object for physics questions
    QuestionBank physicsBank;
    unsigned short int physicsScore = 0;

    // Adding physics questions to the question bank
    physicsBank.addQuestion("What is the SI unit of force?", "Newton");
    physicsBank.addQuestion("What is the formula for velocity?", "Velocity = Distance / Time");
    physicsBank.addQuestion("What is the acceleration due to gravity on Earth?", "9.8 m/s^2");
    physicsBank.addQuestion("What is the law of conservation of energy?", "Energy cannot be created or destroyed, only transformed from one form to another");
    physicsBank.addQuestion("What is the unit of electrical resistance?", "Ohm");
    physicsBank.addQuestion("What is the formula for kinetic energy?", "Kinetic Energy = 0.5 * Mass * (Velocity)^2");
    physicsBank.addQuestion("What is the unit of electrical current?", "Ampere");
    physicsBank.addQuestion("What is the formula for potential energy?", "Potential Energy = Mass * Gravity * Height");
    physicsBank.addQuestion("What is the SI unit of power?", "Watt");
    physicsBank.addQuestion("What is the formula for momentum?", "Momentum = Mass * Velocity");
    physicsBank.addQuestion("What is the first law of thermodynamics?", "Energy cannot be created or destroyed, only transferred or converted");
    physicsBank.addQuestion("What is the unit of electric charge?", "Coulomb");
    physicsBank.addQuestion("What is the formula for work done?", "Work Done = Force * Distance * cos(angle)");
    physicsBank.addQuestion("What is the SI unit of frequency?", "Hertz");
    physicsBank.addQuestion("What is the formula for Ohm's Law?", "V = I * R (Voltage = Current * Resistance)");
    physicsBank.addQuestion("What is the SI unit of capacitance?", "Farad");
    physicsBank.addQuestion("What is the formula for gravitational force?", "Gravitational Force = (G * Mass1 * Mass2) / (Distance)^2");
    physicsBank.addQuestion("What is the formula for electric power?", "Electric Power = Voltage * Current");
    physicsBank.addQuestion("What is the principle behind the functioning of a transformer?", "Electromagnetic induction");
    physicsBank.addQuestion("What is the formula for torque?", "Torque = Force * Distance * sin(angle)");

    // Loop for asking questions
    for (int i = 0; i < 10; i++)
    {
        // Asking the first question without clearing the screen
        if (i == 0)
        {
            // Getting a random question from the question bank
            Question q = physicsBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            // Getting user's answer
            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            // Checking if the answer is correct
            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                physicsScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;

            // Clearing the screen
            system("cls");
        }

        // Asking subsequent questions
        Question q = physicsBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        // Getting user's answer
        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        // Checking if the answer is correct
        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            physicsScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }

    // Assigning grade based on the score
    string grades[5] = { "poor", "average", "good", "very good", "excellent" };
    string grade;
    if (physicsScore < 6)
        grade = grades[0];
    else if (physicsScore == 6)
        grade = grades[1];
    else if (physicsScore == 7)
        grade = grades[2];
    else if (physicsScore == 8)
        grade = grades[3];
    else if (physicsScore > 8)
        grade = grades[4];

    // Storing the score in a file
    ofstream out("dataFiles/physicsResults.txt", ios_base::app);
    if (out.is_open())
    {
        out << physicsScore << "/10" << endl;
        out.close();
    }

    // Displaying the score and grade
    cout << "Your score is: " << physicsScore << " which is a/an " << grade << " grade" << endl << endl;

    // Asking if the user wants to do another test
    cout << "Would you like to do another test?" << endl;
    cout << "If yes, then press 'y' or 'Y'. If not, then press 'n' or 'N' and you will close the app." << endl;    
    cout << "Enter your answer: ";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        // Clearing the screen and going back to the subject selection menu
        system("cls");
        subjects();
    }
    else
        // Exiting the program if the user does not want to do another test
        exit(0);
}
