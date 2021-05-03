#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic {
    class Player {
        public:
            City city;
            Player(Board b, City c);
            Player& drive(City c);
            Player& fly_charter(City c);
            Player& fly_direct(City c);
            Player& fly_shuttle(City c);
            Player& treat(City c);
            Player& take_card(City c); 
            std::string role(); 
            void discover_cure(Color color); 
            void build();
    };
};