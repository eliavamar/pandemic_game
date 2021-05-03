#include "FieldDoctor.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Board.hpp"
#include <iostream>
#include <string>
namespace pandemic { 
FieldDoctor::FieldDoctor(Board b, City c):Player(b,c){}
};