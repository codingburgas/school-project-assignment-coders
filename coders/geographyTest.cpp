#include "tests.h" // Including necessary header files
#include "subjects.h"

// Function definition for geography test
void geographyTest()
{
    // Clearing the console screen
    system("cls");

    // Displaying test title
    cout << "This is the geography test" << endl;

    // Creating a QuestionBank object for geography questions
    QuestionBank geographyBank;

    // Initializing score variable
    unsigned short int geographyScore = 0;

    // Adding geography questions to the question bank
    geographyBank.addQuestion("What is the capital city of Australia?", "Canberra");
    geographyBank.addQuestion("Which river is the longest in the world?", "The Nile River");
    geographyBank.addQuestion("What is the largest desert in the world?", "The Sahara Desert");
    geographyBank.addQuestion("What is the highest mountain in the world?", " Mount Everest");
    geographyBank.addQuestion("Which country is both in Europe and Asia?", "Turkey");
    geographyBank.addQuestion("What is the largest ocean on Earth?", "The Pacific Ocean");
    geographyBank.addQuestion("Which African country is known as the 'Rainbow Nation' ?", "South Africa");
    geographyBank.addQuestion("What is the smallest country in the world?", "Vatican City");
    geographyBank.addQuestion("Which two countries share the longest international border? Note: Put '-' between them and DON'T leave speaces!", "Canada-USA.");
    geographyBank.addQuestion("What is the capital of Japan?", "Tokyo");
    geographyBank.addQuestion("What is the tallest waterfall in the world?", "Angel Falls");
    geographyBank.addQuestion("Which city is the farthest south?", "Ushuaia");
    geographyBank.addQuestion("What is the largest island in the Mediterranean Sea?", "Sicily");
    geographyBank.addQuestion("What is the world's largest coral reef system?", "The Great Barrier Reef.");
    geographyBank.addQuestion("Which continent is the least populated?", "Antarctica");
    geographyBank.addQuestion("What is the deepest lake in the world?", "Baikal");
    geographyBank.addQuestion("What is the official language of Brazil?", "Portuguese");
    geographyBank.addQuestion("What is the largest city by population in the world?", "Tokyo");
    geographyBank.addQuestion("What is the name of the largest river in South America?", "The Amazon River");
    geographyBank.addQuestion("Which European country is known as the 'Land of a Thousand Lakes' ?", "Finland");

    // Loop for asking questions
    for (int i = 0; i < 10; i++)
    {
        // Asking the first question without clearing the screen
        if (i == 0)
        {
            // Getting a random question from the question bank
            Question q = geographyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            // Getting user's answer
            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            // Checking if the answer is correct
            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                geographyScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;

            // Clearing the screen
            system("cls");
        }

        // Asking subsequent questions
        Question q = geographyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        // Getting user's answer
        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        // Checking if the answer is correct
        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            geographyScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }

    // Assigning grade based on the score
    string grades[5] = { "poor", "average", "good", "very good", "excellent" };
    string grade;
    if (geographyScore < 6)
        grade = grades[0];
    else if (geographyScore == 6)
        grade = grades[1];
    else if (geographyScore == 7)
        grade = grades[2];
    else if (geographyScore == 8)
        grade = grades[3];
    else if (geographyScore > 8)
        grade = grades[4];


    ofstream out("dataFiles/geographyResults.txt", ios_base::app);
    if (out.is_open())
    {
        out << geographyScore << "/10" << endl;
        out.close();
    }

    // Displaying the score and grade
    cout << "Your score is: " << geographyScore << " which is a/an " << grade << " grade" << endl << endl;

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