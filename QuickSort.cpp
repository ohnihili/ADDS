#include "QuickSort.h"
#include <string>
#include<iostream>

std::vector<int> QuickSort::sort(std::vector<int> &list){
    list = sort(list, 0, list.size()-1);
    return list;
}

std::vector<int> QuickSort::sort(std::vector<int> &list, int begin, int end){

    std::cout<<"Initial array"<<std::endl;
    std::cout<<"Beginning index = "<<begin<<" Value = "<<list[begin]<<"End index = "<<end<<" end value = "<<list[end]<<std::endl;

    for(int i = begin;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<std::endl;
 
    if(begin>=end)
    {
        std::cout<<"Base case: "<<list[begin]<<std::endl;
        return list;
    }
 
    int pivot;

    if(end-begin>=3)
    {
        int temp = list[2];
        list[2]= list[end];
        list[end] = temp;
        pivot = list.at(end);
    }else
    {
        pivot = list.at(end);
    }
    std::cout<<"Swapped array"<<std::endl;
    for(int i = begin;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<"pivot: "<<pivot<<" and pivot place: "<<end<<std::endl;
    int piv_index = begin-1;
    for(int i = begin; i<=end;i++)
    {
        if(list.at(i)<pivot)
        {
            piv_index++;
            int temp = list[i];
            list[i]= list[piv_index];
            list[piv_index] = temp;
        }
    }

    std::cout<<"before swap array"<<std::endl;

    for(int i = begin;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }

    std::cout<<std::endl;

    if(piv_index == begin-1)
    {
        piv_index++;
    }
    piv_index++;
    int temp = list[end];
    list[end]= list[piv_index];
    list[piv_index] = temp;


    std::cout<<"whole array"<<std::endl;
    for(int i = begin;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Smaller array"<<std::endl;

    for(int i = begin;i<=piv_index-1;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"Larger array"<<std::endl;

    for(int i = piv_index+1;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<std::endl;
    std::cout<<"First, Check Small array:"<<std::endl;
    sort(list, begin, piv_index-1);
    std::cout<<"Now, Check big array:"<<std::endl;
    std::cout<<"This should be: "<<std::endl;

    for(int i = piv_index+1;i<=end;i++)
    {
        std::cout<<list.at(i)<<" ";
    }
    std::cout<<std::endl;
    sort(list, piv_index+1, end);
    
    return list;
}