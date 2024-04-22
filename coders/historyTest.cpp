#include "tests.h" // Including necessary header files
#include "subjects.h"

// Function definition for history test
void historyTest()
{
    // Clearing the console screen
    system("cls");

    // Displaying test title
    cout << "This is the history test" << endl;

    // Creating a QuestionBank object for history questions
    QuestionBank historyBank;

    // Initializing score variable
    unsigned short int historyScore = 0;

    // Adding history questions to the question bank
    historyBank.addQuestion("Who was the first President of the United States?", "George Washington");
    historyBank.addQuestion("Which ancient civilization built the pyramids?", "Ancient Egyptians");
    historyBank.addQuestion("Who is known as the 'Father of the Renaissance'?", "Leonardo da Vinci");
    historyBank.addQuestion("What year did World War II end?", "1945");
    historyBank.addQuestion("Who wrote 'The Communist Manifesto'?", "Karl Marx");
    historyBank.addQuestion("What was the capital of the Byzantine Empire?", "Constantinople");
    historyBank.addQuestion("Who was the first emperor of Rome?", "Augustus Caesar");
    historyBank.addQuestion("What year did the American Civil War end?", "1865");
    historyBank.addQuestion("Who discovered America in 1492?", "Christopher Columbus");
    historyBank.addQuestion("Who was the first female Prime Minister of the United Kingdom?", "Margaret Thatcher");
    historyBank.addQuestion("What was the name of the ship that sank on its maiden voyage in 1912?", "Titanic");
    historyBank.addQuestion("Who was the first human to orbit the Earth?", "Yuri Gagarin");
    historyBank.addQuestion("What was the name of the treaty that ended World War I?", "Treaty of Versailles");
    historyBank.addQuestion("Who was the longest-serving President of the United States?", "Franklin D. Roosevelt");
    historyBank.addQuestion("What year did the French Revolution begin?", "1789");
    historyBank.addQuestion("Who was the first woman to win a Nobel Prize?", "Marie Curie");
    historyBank.addQuestion("What was the name of the ancient city known for its Hanging Gardens?", "Babylon");
    historyBank.addQuestion("Who was the founder of the Mongol Empire?", "Genghis Khan");
    historyBank.addQuestion("What was the first ancient civilization to develop writing?", "Sumerians");
    historyBank.addQuestion("Who was the first African-American President of the United States?", "Barack Obama");

    // Loop for asking questions
    for (int i = 0; i < 10; i++)
    {
        // Asking the first question without clearing the screen
        if (i == 0)
        {
            // Getting a random question from the question bank
            Question q = historyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            // Getting user's answer
            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            // Checking if the answer is correct
            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                historyScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;

            // Clearing the screen
            system("cls");
        }

        // Asking subsequent questions
        Question q = historyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        // Getting user's answer
        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        // Checking if the answer is correct
        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            historyScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }

    // Assigning grade based on the score
    string grades[5] = { "poor", "average", "good", "very good", "excellent" };
    string grade;
    if (historyScore < 6)
        grade = grades[0];
    else if (historyScore == 6)
        grade = grades[1];
    else if (historyScore == 7)
        grade = grades[2];
    else if (historyScore == 8)
        grade = grades[3];
    else if (historyScore > 8)
        grade = grades[4];

    ofstream out("dataFiles/historyResults.txt", ios_base::app);
    if (out.is_open())
    {
        out << historyScore << endl;
        out.close();
    }

    // Displaying the score and grade
    cout << "Your score is: " << historyScore << " which is a/an " << grade << " grade" << endl << endl;

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