#include <iostream>
#include <vector>
#include "BubbleSort.h"
#include "QuickSort.h"


int main() {

    std::vector<int> test = {1,4,3,5,2,1};


    //Bubblesort 
    BubbleSort use;
    std::vector<int> sorted = use.sort(test);
    for (size_t i =0;i<test.size();i++)
    {
        std::cout << sorted[i] << std::endl;
    }

    std::cout <<std::endl;

    // Quicksort
    QuickSort use2;
    std::vector<int> sorted2 = use2.sort(test);
    for (size_t i =0;i<sorted2.size();i++)
    {
        std::cout << sorted2[i] << std::endl;
    }


    return 0;
}