#include "Player.h"
#include "Human.h"
#include "Computer.h"
#include "Referee.h"

int main() {

    Human* Jack = new Human("Jack");
    Human* John = new Human("John");
    Computer* com = new Computer;

    Referee ref;

    ref.refGame(com, John);



    return 0;
}