#include "Dispatcher.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
Dispatcher::Dispatcher(Board b, City c):Player(b,c){}   
};