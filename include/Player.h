#ifndef PLAYER_H
#define PLAYER_H

#include<string>

class Player {
private:
    std::string name;
public:
    void collectPlayerInfo();
    std::string get_name();
};

#endif
