#ifndef RECURSIVEBINARYSEARCH_H
#define RECURSIVEBINARYSEARCH_H

#include <vector>

class RecursiveBinarySearch {

    public:
        bool search(std::vector<int> list, int to_find);
        bool search(std::vector<int> list, int beginning, int end, int target);
};

#endif // RECURSIVEBINARYSEARCH_H
