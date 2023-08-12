#include <iostream>
#include <string>
#include "Rock.h"
#include "Scissors.h"
#include "Paper.h"
#include "Player.h"
#include "Referee.h"
#include "Human.h"
#include "Computer.h"

using namespace std;

int main() {

    Human* player1 = new Human("P1");
    Human* player2 = new Human("P2");
    Computer* computer = new Computer;

    Referee ref;

    ref.refGame(player1,player2);


    return 0;
}