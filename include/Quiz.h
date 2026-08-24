#ifndef QUIZ_H
#define QUIZ_H

#include "Player.h"
#include "Question.h"

class Quiz{
public:
    Player player;
    Question question;
    int categoryChoice;
    void startQuiz();
    void selection();
};

#endif