#include "BubbleSort.h"

std::vector<int> BubbleSort::sort(std::vector<int> list)
{
    size_t length = list.size();

    for (size_t i = 0; i<length; i++)
    {
        for (size_t j = 0; j<length -1;j++)
        {
            if (list[j] > list[j+1])
            {
                int temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }

    return list;
}