#include "../include/Question.h"
#include <iostream>
using namespace std;

    void Question::get_choice() {
        cout <<"Select a category: ";
        cout <<"1. Programming fundamentals";
        cout <<"2. General Knowledge";
        cout <<"3. Computer Science";
        cout <<"Choose: ";
        cin >>choice;
    }

    void Question::get_score(){
        if (choice == 1){
            cout <<"1. Which of the following is used to store a value that can change during program execution?","\nA. Variable","\nB. Constant","\nC. Operator","\nD. Keyword";
            cout << "Enter your Answer: ";
            cin >>answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"2. Which data type is commonly used to store whole numbers?","\nA. Float","\nB. Integer","\nC. Character","\nD. Boolean";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"3. Which programming structure is used to make a decision based on a condition?","\nA. Loop","\nB. Function","\nC. Conditional statement","\nD. Array";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"4. Which loop is generally used when a block of code needs to execute repeatedly for a known number of times?","\nA. if statement","\nB. for loop","\nC. switch statement","\nD. return statement";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"5. What is the main purpose of a function?","\nA. To store multiple values","\nB. To repeat or organize a specific block of code","\nC. To create a database","\nD. To change the programming language";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"6. Which operator is commonly used to compare two values for equality?","\nA. =","\nB. !=","\nC. ==","\nD. >=";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"7. What is an algorithm?","\nA. A programming language","\nB. A step-by-step procedure for solving a problem","\nC. A type of variable","\nD. A computer component";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"8. What is the purpose of a loop in programming?","\nA. To define a class","\nB. To repeat a block of instructions","\nC. To declare a variable","\nD. To compile a program";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }
            
            cout<<"9. Which of the following represents a Boolean value?","A. 25","\nB. 'Hello'","\nC. 3.14","\nD. true";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "D" || answer == "d") {
                count++;
            }

            cout<<"10. What is debugging?","A. Writing comments in a program","\nB. Finding and fixing errors in a program","\nC. Converting code into machine language","\nD. Designing a user interface";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }
        }
        else if (choice == 2) {
            cout<<"1. What is the capital city of France?","\nA. Madrid","\nB. Rome","\nC. Paris","\nD. Berlin";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"2. Which is the largest ocean on Earth?","\nA. Atlantic Ocean","\nB. Indian Ocean","\nC. Arctic Ocean","\nD. Pacific Ocean";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "D" || answer == "d") {
                count++;
            }

            cout<<"3. Which planet is known as the Red Planet?","\nA. Venus","\nB. Mars","\nC. Jupiter","\nD. Mercury";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"4. What is the largest continent by land area?","\nA. Africa","\nB. Europe","\nC. Asia","\nD. North America";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"5. Which is the capital city of France?","\nA. Madrid","\nB. Rome","\nC. Paris","\nD. Berlin";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"6. Which is the largest ocean on Earth?","\nA. Atlantic Ocean","\nB. Indian Ocean","\nC. Arctic Ocean","\nD. Pacific Ocean";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "D" || answer == "d") {
                count++;
            }

            cout<<"7. Which planet is known as the Red Planet?","\nA. Venus","\nB. Mars","\nC. Jupiter","\nD. Mercury";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"8. What is the largest continent by land area?","\nA. Africa","\nB. Europe","\nC. Asia","\nD. North America";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;
            }

            cout<<"9. Which gas do humans primarily need for respiration?","\nA. Carbon dioxide","\nB. Oxygen","\nC. Nitrogen","\nD. Hydrogen";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"10. How many continents are generally recognized on Earth?","\nA. Five","\nB. Six","\nC. Seven","\nD. Eight";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "C" || answer == "c") {
                count++;      
            }
        }
        else if (choice == 3) {
            cout<<"1. What does CPU stand for?","\nA. Central Processing Unit","\nB. Computer Processing Utility","\nC. Central Program Unit","\nD. Computer Programming Unit";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"2. Which component is commonly known as the temporary working memory of a computer?","\nA. Hard Disk","\nB. RAM","\nC. ROM","\nD. GPU";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"3. What does RAM stand for?","\nA. Read Access Memory","\nB. Random Access Memory","\nC. Rapid Application Memory","\nD. Remote Access Module";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"4. Which of the following is an operating system?","\nA. Python","\nB. Linux","\nC. HTML","\nD. MySQL";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }
                
            cout<<"5. What is the primary purpose of an operating system?","\nA. To create websites","\nB. To manage computer hardware and software resources","\nC. To design images","\nD. To write only C++ programs";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }

            cout<<"6. What does URL stand for?","\nA. Uniform Resource Locator","\nB. Universal Reference Link","\nC. Unified Resource Language","\nD. Uniform Retrieval Link";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"7. Which device is primarily used to connect multiple devices within a local network?","\nA. Switch","\nB. Monitor","\nC. Keyboard","\nD. Printer";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"8. What is a database primarily used for?","\nA. Storing and managing organized data","\nB. Displaying graphics","\nC. Processing electricity","\nD. Editing videos";
            cout<< "Enter your Answer: ";
            cin >> answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"9. What does HTTP primarily define?","\nA. A protocol for communication on the web","\nB. A programming language","\nC. A computer processor","\nD. A database structure";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "A" || answer == "a") {
                count++;
            }

            cout<<"10. Which number system is primarily used by computers to represent data at the lowest level?","\nA. Decimal","\nB. Binary","\nC. Octal","\nD. Roman";
            cout<< "Enter your Answer: ";
            cin>>answer;
            if (answer == "B" || answer == "b") {
                count++;
            }
        }
        else {
            cout<<"Invalid choice. ";
        }
    }
