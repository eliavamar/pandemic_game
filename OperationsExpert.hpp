#pragma once
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
namespace pandemic { 
    class OperationsExpert:public Player{
        public:
            OperationsExpert(Board b, City c);
        
    };

};