#ifndef QUESTION_H
#define QUESTION_H

#include<string>

class Question{
public:
    int choice;
    int count = 0;
    std::string answer;

    void get_choice();
    void get_score();
};

#endif