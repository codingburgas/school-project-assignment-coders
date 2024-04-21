#include "biologyTest.h"

void biologyTest()
{
    system("cls");
    cout << "This is the biology test" << endl; 
    QuestionBank biologyBank;
    unsigned short int score = 0;

    biologyBank.addQuestion("What is the function of the nucleus in the cell?", "Genetic");
    biologyBank.addQuestion("What process the replication is?", "Anabolic");
    biologyBank.addQuestion("What do we obtain in meiosis but not in mitosis?", "4 haploid cells");
    biologyBank.addQuestion("The DNA to RNA genetic information shall be carried out in:", "Translation");
    biologyBank.addQuestion("What is the process by which living organisms produce new individuals of the same kind?", "Reproduction");
    biologyBank.addQuestion("What is the powerhouse of the cell?", "Mitochondria");
    biologyBank.addQuestion("What is the process by which plants make their own food?", "Photosynthesis");
    biologyBank.addQuestion("What is the name of the fluid part of blood?", "Plasma");
    biologyBank.addQuestion("What is the scientific term for the study of plants?", "Botany");
    biologyBank.addQuestion("Which gas do plants primarily take in during photosynthesis?", "Carbon Dioxide");
    biologyBank.addQuestion("What is the chemical formula for glucose?", "C6H12O6");
    biologyBank.addQuestion("What is the largest organ in the human body?", "Skin");
    biologyBank.addQuestion("Which part of the plant conducts photosynthesis?", "Leaves");
    biologyBank.addQuestion("What is the smallest bone in the human body?", "Stapes");
    biologyBank.addQuestion("What is the name of the process by which water evaporates from the leaves of plants?", "Transpiration");
    biologyBank.addQuestion("What is the scientific name for the human thumb?", "Pollex");
    biologyBank.addQuestion("What is the study of the interactions between organisms and their environment called?", "Ecology");


    for (int i = 0; i < 15; i++)
    {
        if (i == 0)
        {
            Question q = biologyBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                score++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;
            system("cls");
        }
        Question q = biologyBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            score++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }
    cout << "Your final score is: " << score << endl;
    


}
