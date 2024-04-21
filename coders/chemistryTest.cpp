#include "tests.h" // Including necessary header files
#include "subjects.h"

// Function definition for chemistry test
void chemistryTest()
{
	// Clearing the console screen
	system("cls");

	// Displaying test title
	cout << "This is the chemistry test" << endl;

	// Creating a QuestionBank object for chemistry questions
	QuestionBank chemistryBank;

	// Initializing score variable
	unsigned short int chemistryScore = 0;

	// Adding chemistry questions to the question bank
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

	// Loop for asking questions
	for (int i = 0; i < 10; i++)
	{
		// Asking the first question without clearing the screen
		if (i == 0)
		{
			// Getting a random question from the question bank
			Question q = chemistryBank.getRandomQuestion();
			cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

			// Getting user's answer
			string answer;
			cout << "Enter your answer: ";
			getline(cin, answer);

			// Checking if the answer is correct
			if (answer == q.getAnswer()) {
				cout << "Correct!" << endl;
				chemistryScore++;
			}
			else {
				cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
			}
			cout << endl;

			// Clearing the screen
			system("cls");
		}

		// Asking subsequent questions
		Question q = chemistryBank.getRandomQuestion();
		cout << "Question " << i + 1 << ": " << q.getQuestion() << endl;

		// Getting user's answer
		string answer;
		cout << "Enter your answer: ";
		getline(cin, answer);

		// Checking if the answer is correct
		if (answer == q.getAnswer()) {
			cout << "Correct!" << endl;
			chemistryScore++;
		}
		else {
			cout << "Incorrect. The correct answer is: " << q.getAnswer() << endl;
		}
		cout << endl;
	}

	// Assigning grade based on the score
	string grades[5] = { "poor", "average", "good", "very good", "excellent" };
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

	// Displaying the score and grade
	cout << "Your score is: " << chemistryScore << " which is " << grade << " grade" << endl << endl;

	// Asking if the user wants to do another test
	cout << "Would you like to do another test?" << endl;
	cout << "If yes, then press 'y' or 'Y'. If not, then press 'n' or 'N'." << endl;
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