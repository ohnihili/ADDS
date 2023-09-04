#include "BubbleSort.h"
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <vector>
#include <string>
#include <iostream>
#include <sstream>

int main() {

    BubbleSort bub;
    RecursiveBinarySearch search;
    std::string values;
    std::vector<int> numbers;

    std::getline(std::cin, values);
    std::istringstream iss(values);
    int number;

    while (iss >> number) 
    {
        numbers.push_back(number);
    }

    std::vector<int> sorted = bub.sort(numbers);
    bool searched = search.search(numbers, 1);

    std::cout << std::boolalpha << searched << " ";

    for (size_t i = 0; i < sorted.size(); i++) 
    {
        std::cout << sorted[i] << " ";
    }

    return 1;
}