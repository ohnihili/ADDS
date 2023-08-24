#include <iostream>
#include "Finder.h"

using namespace std;

int main() {

    string str1 = "12912391234";

    string str2 = "12345";

    Finder find;

    vector<int> vec = find.findSubstrings(str1,str2);

    cout << "The vector elements are : ";

    for(int i=0; i < vec.size(); i++)
    {
        cout << vec.at(i) << ' ';
    }

    cout<< endl;

    return 0;
}