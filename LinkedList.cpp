#include "LinkedList.h"
#include <iostream>
#include <vector>
#include <limits>

LinkedList::LinkedList()
{
    head = nullptr;
}
LinkedList::LinkedList(int* array, int len)
{
    head->link = nullptr;
    for(size_t i =0; i<len; i++)
    {
        Node *newNode = new Node(array[i]);

        if(head == nullptr)
        {
            head=newNode;
        } else
        {
            Node *temp = head;
            while(temp->link != nullptr)
            {
                temp=temp->link;
            }
            temp->link = newNode;
        }
    }
}

LinkedList::~LinkedList()
{
    
}

void LinkedList::insertPosition(int pos, int newNum)
{
    Node* newNode = new Node(newNum);

    if (pos <= 1)  
    {
        newNode->link = head;
        head = &newNode;
    }



}
bool LinkedList::deletePosition(int pos)
{

}
int LinkedList::get(int pos)
{

}
int LinkedList::search(int target)
{

}
void LinkedList::printList()
{
    Node* currNode = head;
    while (currNode != nullptr)
    {
        std::cout << currNode->data << std::endl;
        current = currNode->link;
    }
}