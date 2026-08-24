#include "../include/Question.h"
#include <iostream>
using namespace std;


    void Question::isValidAnswer() {
        count = 0;
        cout <<"\nSelect a category: ";
        cout <<"\n1. Programming fundamentals";
        cout <<"\n2. General Knowledge";
        cout <<"\n3. Computer Science\n";
        cout <<"\nChoose: ";
        cin >>choice;

        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n         QUESTION 1 OF 10        ";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

        if (choice == 1){
            cout <<"\n1. Which of the following is used to store a value that can change during program execution?"<<"\nA. Variable"<<"\nB. Constant"<<"\nC. Operator"<<"\nD. Keyword";
            cout << "\nEnter your Answer: ";
            cin >>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
            
            cout<<"\n2. Which data type is commonly used to store whole numbers?"<<"\nA. Float"<<"\nB. Integer"<<"\nC. Character"<<"\nD. Boolean";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n3. Which programming structure is used to make a decision based on a condition?"<<"\nA. Loop"<<"\nB. Function"<<"\nC. Conditional statement"<<"\nD. Array";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n4. Which loop is generally used when a block of code needs to execute repeatedly for a known number of times?"<<"\nA. if statement"<<"\nB. for loop"<<"\nC. switch statement"<<"\nD. return statement";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n5. What is the main purpose of a function?"<<"\nA. To store multiple values"<<"\nB. To repeat or organize a specific block of code"<<"\nC. To create a database"<<"\nD. To change the programming language";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n6. Which operator is commonly used to compare two values for equality?"<<"\nA. ="<<"\nB. !="<<"\nC. =="<<"\nD. >=";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n7. What is an algorithm?"<<"\nA. A programming language"<<"\nB. A step-by-step procedure for solving a problem"<<"\nC. A type of variable"<<"\nD. A computer component";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n8. What is the purpose of a loop in programming?"<<"\nA. To define a class"<<"\nB. To repeat a block of instructions"<<"\nC. To declare a variable"<<"\nD. To compile a program";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
            
            cout<<"\n9. Which of the following represents a Boolean value?"<<"\nA. 25"<<"\nB. 'Hello'"<<"\nC. 3.14"<<"\nD. true";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "D" || answer == "d") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n10. What is debugging?"<<"\nA. Writing comments in a program"<<"\nB. Finding and fixing errors in a program"<<"\nC. Converting code into machine language"<<"\nD. Designing a user interface";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
        }

        else if (choice == 2) {
            cout<<"\n1. Which country has the most time zones in the world, when including its overseas territories?"<<"\nA. Russia"<<"\nB. United States"<<"\nC. France"<<"\nD. China";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c"){
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
            
            cout<<"\n2. Which is the smallest country in the world by area?"<<"\nA. Monaco"<<"\nB. Vatican City"<<"\nC. San Marino"<<"\nD. Liechtenstein";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n3. Which planet is known as the Red Planet?"<<"\nA. Venus"<<"\nB. Mars"<<"\nC. Jupiter"<<"\nD. Mercury";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n4. What is the largest continent by land area?"<<"\nA. Africa"<<"\nB. Europe"<<"\nC. Asia"<<"\nD. North America";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n5. Which is the capital city of France?"<<"\nA. Madrid"<<"\nB. Rome"<<"\nC. Paris"<<"\nD. Berlin";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n6. Which is the largest ocean on Earth?"<<"\nA. Atlantic Ocean"<<"\nB. Indian Ocean"<<"\nC. Arctic Ocean"<<"\nD. Pacific Ocean";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "D" || answer == "d") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n7. Which part of the human body has no blood vessels?"<<"\nA. Brain"<<"\nB. Bone"<<"\nC. Cornea"<<"\nD. Muscle";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n8. Which animal has three hearts?"<<"\nA. Shark"<<"\nB. Octopus"<<"\nC. Dolphin"<<"\nD. Crocodile";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n9. Which gas do humans primarily need for respiration?"<<"\nA. Carbon dioxide"<<"\nB. Oxygen"<<"\nC. Nitrogen"<<"\nD. Hydrogen";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n10. How many continents are generally recognized on Earth?"<<"\nA. Five"<<"\nB. Six"<<"\nC. Seven"<<"\nD. Eight";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "C" || answer == "c") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
        }
        else if(choice == 3) {
            cout<<"\n1. What does CPU stand for?"<<"\nA. Central Processing Unit"<<"\nB. Computer Processing Utility"<<"\nC. Central Program Unit"<<"\nD. Computer Programming Unit";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n2. Which component is commonly known as the temporary working memory of a computer?"<<"\nA. Hard Disk"<<"\nB. RAM"<<"\nC. ROM"<<"\nD. GPU";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n3. What does RAM stand for?"<<"\nA. Read Access Memory"<<"\nB. Random Access Memory"<<"\nC. Rapid Application Memory"<<"\nD. Remote Access Module";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n4. Who is often called the 'father of the computer'?"<<"\nA. Alan Turing"<<"\nB. Charles Babbage"<<"\nC. Bill Gates"<<"\nD. Steve Jobs";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
                
            cout<<"\n5. What is the primary purpose of an operating system?"<<"\nA. To create websites"<<"\nB. To manage computer hardware and software resources"<<"\nC. To design images"<<"\nD. To write only C++ programs";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n6. What does URL stand for?"<<"\nA. Uniform Resource Locator"<<"\nB. Universal Reference Link"<<"\nC. Unified Resource Language"<<"\nD. Uniform Retrieval Link";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n7. Which device is primarily used to connect multiple devices within a local network?"<<"\nA. Switch"<<"\nB. Monitor"<<"\nC. Keyboard"<<"\nD. Printer";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n8. What is a database primarily used for?"<<"\nA. Storing and managing organized data"<<"\nB. Displaying graphics"<<"\nC. Processing electricity"<<"\nD. Editing videos";
            cout<< "\nEnter your Answer: ";
            cin >> answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n9. What does HTTP primarily define?"<<"\nA. A protocol for communication on the web"<<"\nB. A programming language"<<"\nC. A computer processor"<<"\nD. A database structure";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "A" || answer == "a") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }

            cout<<"\n10. Which number system is primarily used by computers to represent data at the lowest level?"<<"\nA. Decimal"<<"\nB. Binary"<<"\nC. Octal"<<"\nD. Roman";
            cout<< "\nEnter your Answer: ";
            cin>>answer;
            if (answer != "A" && answer !="a" && 
                answer != "B" && answer != "b" && 
                answer != "C" && answer != "c" && 
                answer != "D" && answer != "d"){
                cout<<"\nInvalid answer. Please enter A, B, C, or D.\n";
            }
            else {
                if (answer == "B" || answer == "b") {
                    count++;
                    cout<<"Correct!\n";
                }
                else {
                    cout<<"InCorrect!\n";
                }
            }
        }

        else {
            cout<<"\nInvalid choice. ";
        }
    }