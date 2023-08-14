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

    int value = obj.reverseDigit(1234567);

    cout << value << endl;

    string word = obj.reverseString("Wow this actually works!");

    cout << word << endl;


    return 0;
}