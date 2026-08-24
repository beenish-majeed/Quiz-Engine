#ifndef QUESTION_H
#define QUESTION_H
#include<string>

class Question{
public:
    int choice;
    static int count;
    std::string answer;

    void isValidAnswer();
};

#endif