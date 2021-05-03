#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include "Player.hpp"
#include <iostream>
#include <string>
using namespace std;
namespace pandemic{
    Player::Player(Board b, City c){}
    Player& Player::fly_charter(City c){return *this;}
    Player& Player::drive(City c){return *this;}
    Player& Player::fly_direct(City c){return *this;}
    Player& Player::fly_shuttle(City c){return *this;}
    Player& Player::treat(City c){return *this;}
    Player& Player::take_card(City c){return *this;}
    std::string Player::role(){string s="hi";return s;}
    void Player::discover_cure(Color color){} 
    void Player::build(){}
};