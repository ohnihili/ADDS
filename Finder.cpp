#include "Finder.h"

using namespace std;

vector<int> Finder::findSubstrings(string s1, string s2)
{
    vector<int> result;

    //declare index here
    int index = 0;

    for(size_t i = 1; i <= s2.size(); i++) 
    {
        //if index = -1, push -1 into rest of vector
        if (index == -1)
        {
            result.push_back(-1);
            continue;
        }

        //modify find to start from index
        size_t found = s1.find(s2.substr(0, i),index);

        //update nidex here to somthing
        if (found != string::npos) 
        {
            result.push_back(found);
            index = found;

        //update index again
        } else {
            result.push_back(-1);
            index = -1;
        }
    }
    return result;
};
