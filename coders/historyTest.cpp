#include "tests.h"

void historyTest()
{
    system("cls");
    cout << "This is the history test" << endl;
    QuestionBank historyBank;
    unsigned short int historyScore = 0;

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

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            Question q = historyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                historyScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;
            system("cls");
        }
        Question q = historyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            historyScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }
    cout << "Your final score is: " << historyScore << endl;
}