#include "../include/Player.h"
#include <iostream>
using namespace std;

    void Player::collectPlayerInfo() {
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
        cout<<"\n           QUIZ ENGINE           ";
        cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";     
        cout <<"\nEnter Name: ";
        cin >>name;
    }
    string Player::get_name(){
        return name;
    }