﻿// Including necessary header files
#include "tests.h"
#include "subjects.h"

// Function definition for biology test
void biologyTest()
{
    // Clearing the console screen
    system("cls");

    // Displaying test title
    cout << "This is the biology test" << endl;

    // Creating a QuestionBank object for biology questions
    QuestionBank biologyBank;

    // Initializing score variable
    unsigned short int biologyScore = 0;

    // Adding biology questions to the question bank
    biologyBank.addQuestion("What is the function of the nucleus in the cell?", "Genetic");
    biologyBank.addQuestion("What process the replication is?", "Anabolic");
    biologyBank.addQuestion("What do we obtain in meiosis but not in mitosis?", "4 haploid cells");
    biologyBank.addQuestion("The DNA to RNA genetic information shall be carried out in:", "Translation");
    biologyBank.addQuestion("What is the process by which living organisms produce new individuals of the same kind?", "Reproduction");
    biologyBank.addQuestion("What is the powerhouse of the cell?", "Mitochondria");
    biologyBank.addQuestion("What is the process by which plants make their own food?", "Photosynthesis");
    biologyBank.addQuestion("What is the name of the fluid part of blood?", "Plasma");
    biologyBank.addQuestion("What is the scientific term for the study of plants?", "Botany");
    biologyBank.addQuestion("Which gas do plants primarily take in during photosynthesis?", "CO2");
    biologyBank.addQuestion("What is the chemical formula for glucose?", "C6H12O6");
    biologyBank.addQuestion("What is the largest organ in the human body?", "Skin");
    biologyBank.addQuestion("Which part of the plant conducts photosynthesis?", "Leaves");
    biologyBank.addQuestion("What is the smallest bone in the human body?", "Stapes");
    biologyBank.addQuestion("What is the name of the process by which water evaporates from the leaves of plants?", "Transpiration");
    biologyBank.addQuestion("What is the scientific name for the human thumb?", "Pollex");
    biologyBank.addQuestion("What is the study of the interactions between organisms and their environment called?", "Ecology");
    biologyBank.addQuestion("What is the name of the protein that carries oxygen in red blood cells?", "Hemoglobin");
    biologyBank.addQuestion("What is the term for the genetic makeup of an organism?", "Genotype");
    biologyBank.addQuestion("What is the name of the outermost layer of skin cells?", "Epidermis");

    // Loop for asking questions
    for (int i = 0; i < 10; i++)
    {
        // Asking the first question without clearing the screen
        if (i == 0)
        {
            // Getting a random question from the question bank
            Question q = biologyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            // Getting user's answer
            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            // Checking if the answer is correct
            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                biologyScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;

            // Clearing the screen
            system("cls");
        }

        // Asking subsequent questions
        Question q = biologyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        // Getting user's answer
        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        // Checking if the answer is correct
        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            biologyScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }

    // Assigning grade based on the score
    string grades[5] = { "poor", "average", "good", "very good", "excellent" };
    string grade;
    if (biologyScore < 6)
        grade = grades[0];
    else if (biologyScore == 6)
        grade = grades[1];
    else if (biologyScore == 7)
        grade = grades[2];
    else if (biologyScore == 8)
        grade = grades[3];
    else if (biologyScore > 8)
        grade = grades[4];

    ofstream out("dataFiles/biologyResults.txt", ios_base::app);
    if (out.is_open())
    {
        out << biologyScore << "/10" << endl;
        out.close();
    }

    // Displaying the score and grade
    cout << "Your score is: " << biologyScore << " which is a/an " << grade << " grade." << endl << endl;

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
