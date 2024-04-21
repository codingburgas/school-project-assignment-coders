#include "tests.h"

void geographyTest()
{
    system("cls");
    cout << "This is the geography test" << endl;
    QuestionBank geographyBank;
    unsigned short int geographyScore = 0;

    geographyBank.addQuestion("What is the capital city of Australia?", "Canberra");
    geographyBank.addQuestion("Which river is the longest in the world?", "The Nile River");
    geographyBank.addQuestion("What is the largest desert in the world?", " The Sahara Desert");
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

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            Question q = geographyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                geographyScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;
            system("cls");
        }
        Question q = geographyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            geographyScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }
    cout << "Your final score is: " << geographyScore << " out of 10!" << endl;



}
