#include "QuickSort.h"

std::vector<int> QuickSort::sort(std::vector<int> list)
{
    int start = list[0];
    int end = list[list.size()-1];
    sort(list, start, end);

    return list;
}

std::vector<int> QuickSort::sort(std::vector<int> list, int start, int end)
{
    if (start >= end)
    {
        return list;
    }

    int pivot;

    if (list.size() >= 3)
    {
        pivot = list[2];
    } else
    { 
        pivot = list[list.size()-1];
    }

    int pivot_index = start;
    for (int i = start;i<end;i++)
    {
        if (list.at(i) < pivot)
        {
            int temp = list[i];
            list[i] = list[pivot_index];
            list[pivot_index] = temp;
        }
    }



    sort(list, start, pivot_index-1);
    sort(list, pivot_index, end);

    return list;
}

