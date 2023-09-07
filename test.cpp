#include <iostream>
#include <string>

using namespace std;

int main() {

    int *ptr = new int;
    int x = 5;
    *ptr = x;

    cout << "This is x: " << x << " | This is x's address: " << &x << endl << "This is ptr " << &ptr << endl;

    return 0;
}


