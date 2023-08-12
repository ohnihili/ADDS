#include <iostream>
#include <string>
#include "Truckloads.h"
#include "Reverser.h"

using namespace std;

int main() {

    // Truckloads truck;

    // int out = truck.numTrucks(1024,5);

    // cout << out << endl;

    Reverser obj;

    int value = obj.reverseDigit(15376);

    cout << value << endl;


    return 0;
}