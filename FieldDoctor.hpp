#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class FieldDoctor:public Player{
        public:
            FieldDoctor(Board b, City c);
        
    };

};