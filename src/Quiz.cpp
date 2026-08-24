#include "../include/Quiz.h"
#include <iostream>
using namespace std;


    void Quiz::startQuiz(){

        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n           QUIZ RESULT           ";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
        cout << "\nPlayer: " << get_name();
        cout<<"\nQuestions:  10\n";
        cout<<"\nCorrect: "<< count;
        cout<<"\nIncorrect: "<< 10 - count;
        cout<<"\nScore: "<< count * 10 <<"%";

        if (count <= 3) {
            cout<<"\nPerformance: Bad\n";
        }
        else if (count <= 5) {
            cout<<"\nPerformance: Average\n";
        }
        else if (count <= 7) {
            cout<<"\nPerformance: Good\n";
        }
        else if (count == 8) {
            cout<<"\nPerformance: Very Good\n";
        }
        else if (count <=10){
            cout<<"\nPerformance: Excellent\n";
        }
        else {
            cout<<"invalid count";
        }
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
    }
 
   void Quiz::selection(){
        cout<<"\n1. Try Again:";
        cout<<"\n2. Exit:     ";
        cin>>categoryChoice;
        if (categoryChoice == 1){
            collectPlayerInfo();
            isValidAnswer();
            startQuiz();
            selection();   
        }
        else {
            cout<<"";
        }
    }