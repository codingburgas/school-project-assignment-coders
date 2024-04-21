#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;


class Question {
private:
    string question;
    string answer;

public:
    Question(const string& q, const string& a) : question(q), answer(a) {}

    string getQuestion() const {
        return question;
    }

    string getAnswer() const {
        return answer;
    }
};

class QuestionBank {
private:
    vector<Question> questions;

public:
    void addQuestion(const string& question, const string& answer) {
        questions.emplace_back(question, answer);
    }

    Question getRandomQuestion() {
        if (questions.empty()) {
            return Question("No questions available.", "");
        }

        srand(static_cast<unsigned int>(time(nullptr)));
        int randomIndex = rand() % questions.size();
        Question selectedQuestion = questions[randomIndex];
        questions.erase(questions.begin() + randomIndex);
        return selectedQuestion;
    }
};
void geographyTest();
void biologyTest();
void physicsTest();
void historyTest();
void chemistryTest();