#include "../include/Player.h"
#include "../include/Question.h"
#include "../include/Quiz.h"
#include <iostream>
using namespace std;

int main()
{
    Quiz user1;

    user1.collectPlayerInfo();
    user1.isValidAnswer();
    user1.startQuiz();
    user1.selection();   
}