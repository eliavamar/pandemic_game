#include "doctest.h"
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"
using namespace pandemic;
#include <vector>
#include <iostream>
#include <stdexcept>
using namespace std;
TEST_CASE("Working Test:"){
    cout << boolalpha;
	Board board;
    Player player1(board, City::Washington);
    OperationsExpert player2(board, City::Atlanta);
    CHECK(board.is_clean());
    board[City::HongKong] = 2;
    CHECK(!board.is_clean());
    board[City::HongKong] = 0;
    CHECK(board.is_clean());
    CHECK_THROWS(player1.drive(City::Baghdad));
    CHECK_THROWS(player1.fly_direct(City::Baghdad));
    CHECK_THROWS(player1.fly_charter(City::Baghdad));
    CHECK_THROWS(player1.fly_shuttle(City::Baghdad));
    player1.take_card(City::Johannesburg)
	.take_card(City::Khartoum)
	.take_card(City::SaoPaulo)
	.take_card(City::BuenosAires)
	.take_card(City::HoChiMinhCity);
    CHECK_NOTHROW(player1.fly_direct(City::Johannesburg));
    CHECK_NOTHROW(player1.fly_direct(City::Khartoum));
    CHECK_NOTHROW(player1.fly_direct(City::SaoPaulo));
    CHECK_NOTHROW(player1.fly_direct(City::BuenosAires));
    CHECK_NOTHROW(player1.fly_direct(City::HoChiMinhCity));
    CHECK_NOTHROW(player1.drive(City::Bangkok));
    CHECK_NOTHROW(player1.drive(City::Kolkata));
    CHECK_NOTHROW(player1.drive(City::Delhi));
    CHECK_NOTHROW(player2.build());
    Dispatcher player3(board,City::Atlanta);
    CHECK_NOTHROW(player3.fly_direct(City::Bangkok));
    Researcher player4(board,City::Delhi);
    CHECK_THROWS(player4.discover_cure(Color::Red));
    board[City::Bangkok]=1;
    CHECK_NOTHROW(player4.discover_cure(Color::Red));
    CHECK_EQ(player3.role(),"Dispatcher");
    CHECK_EQ(player4.role(),"Researcher");

}