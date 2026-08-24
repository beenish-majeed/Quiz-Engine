#ifndef QUIZ_H
#define QUIZ_H

#include "Player.h"
#include "Question.h"

class Quiz: public Player, public Question{
private:
    Player player;
    Question question;
public:
    int categoryChoice;
    void startQuiz();
    void selection();
};

#endif