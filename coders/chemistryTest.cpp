#include "tests.h"
#include "subjects.h"

void chemistryTest()
{
	system("cls");
	cout << "This is the chemistry test" << endl;
	QuestionBank chemistryBank;
	unsigned short int chemistryScore = 0;

	chemistryBank.addQuestion("What is the chemical symbol for water?", "H2O");
	chemistryBank.addQuestion("What is the pH value of pure water at room temperature?", "7"); 
	chemistryBank.addQuestion("What is the smallest unit of an element that retains its chemical properties?", "Atom"); 
	chemistryBank.addQuestion("What is the process of converting a liquid into a gas at a temperature below its boiling point called?", "Evaporation"); 
	chemistryBank.addQuestion("What is the name of the bond formed by sharing electrons between atoms?", "Covalent bond"); 
	chemistryBank.addQuestion("What is the chemical formula for table salt?", "NaCl"); 
	chemistryBank.addQuestion("What is the process of separating a mixture using differences in boiling points called?", "Distillation");    
	chemistryBank.addQuestion("What is the SI unit of measuring the amount of substance?", "Mole");   
	chemistryBank.addQuestion("What is the chemical formula for sulfuric acid?", "H2SO4");    
	chemistryBank.addQuestion("What is the name of the reaction where oxygen combines with another substance, often producing heat and light?", "Combustion");  
	chemistryBank.addQuestion("What is the study of the nature, properties, and transformations of matter called?", "Chemistry"); 
	chemistryBank.addQuestion("What is the chemical symbol for iron?", "Fe");    
	chemistryBank.addQuestion("What is the process of breaking down a compound into its constituent elements called?", "Decomposition");    
	chemistryBank.addQuestion("What is the SI unit of measuring temperature?", "Kelvin");  
	chemistryBank.addQuestion("What is the chemical formula for carbon dioxide?", "CO2");    
	chemistryBank.addQuestion("What is the name of the process where a substance changes directly from a solid to a gas without passing through the liquid state?", "Sublimation");   
	chemistryBank.addQuestion("What is the name of the reaction where a single compound breaks down into two or more simpler substances?", "Decomposition");   
	chemistryBank.addQuestion("What is the name of the process where a gas changes into a liquid?", "Condensation");    
	chemistryBank.addQuestion("What is the chemical symbol for gold?", "Au"); 
	chemistryBank.addQuestion("What is the SI unit of measuring pressure?", "Pascal");

    for (int i = 0; i < 10; i++)
    {
        if (i == 0)
        {
            Question q = chemistryBank.getRandomQuestion();
            cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

            string answer;
            cout << "Enter your answer: ";
            getline(cin, answer);

            if (answer == q.getAnswer()) {
                cout << "Correct!" << endl;
                chemistryScore++;
            }
            else {
                cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
            }
            cout << endl;
            system("cls");
        }
        Question q = chemistryBank.getRandomQuestion();
        cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

        string answer;
        cout << "Enter your answer: ";
        getline(cin, answer);

        if (answer == q.getAnswer()) {
            cout << "Correct!" << endl;
            chemistryScore++;
        }
        else {
            cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
        }
        cout << endl;
    }
    
    /*string grades[5] = { "poor", "average", "good", "very good", "exellent" };
    string grade;
    if (chemistryScore < 6)
        grade = grades[0];
    else if (chemistryScore == 6)
        grade = grades[1];
    else if (chemistryScore == 7)
        grade = grades[2];
    else if (chemistryScore == 8)
        grade = grades[3];
    else if (chemistryScore > 8)
        grade = grades[4];


    cout << "Your score is: " << chemistryScore << " which is " << grade << " grade" << endl << endl;
    cout << "Would you like to do another test?" << endl;
    cout << "If yes, then press 'y' or 'Y'. If not, then press 'n' or 'N'." << endl;
    cout << "Enter your answer: ";
    char answer;
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
        system("cls");
        subjects();
    }
    else
        exit(0);*/
}