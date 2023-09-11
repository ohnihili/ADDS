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
    head = nullptr;
    for(int i =0; i<len; i++)
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
    Node *temp = head;
    while(temp->link != nullptr)
    {
        temp=temp->link;
        delete head;
        head = temp;
    }
}

void LinkedList::insertPosition(int pos, int newNum)
{
    Node* newNode = new Node(newNum);

    Node *temp = head;

    if (pos <= 1)  
    {
        newNode->link = head;
        head = newNode;
    } else if ((pos > 1))
    {   
        temp = head;
        for(int i=1; i<pos-1; i++)
        {
            if(temp!=nullptr)
            {
                temp=temp->link;
            }
        }
         if(temp != nullptr) 
         {
            newNode->link = temp->link;
            temp->link = newNode;
         }
    }
}

bool LinkedList::deletePosition(int pos)
{
    Node *temp = head;
    Node *temp2 = head;

    int size = 1;
    while(temp->link != nullptr)
    {
        temp=temp->link;
        size++;
    }

    temp = head;

    if ((pos < 0) || (pos > size))
    {
        return false;
    } else if ((pos == 0) || (pos == 1))
    {
        temp=temp->link;
        delete head;
        head = temp;
    } else
    {
    for(int i=1; i<pos-1; i++)
    {
        temp=temp->link;
    }

    for(int i=1; i<pos; i++)
    {
        temp2=temp2->link;
    }

    temp->link = temp2->link;

    delete temp2;
    }

    return false;
}

int LinkedList::get(int pos)
{
    Node *temp = head;
    int size = 1;
    while(temp->link != nullptr)
    {
        temp=temp->link;
        size++;
    }
    temp = head;

    if ((pos < 0) || (pos > size))
    {
        return std::numeric_limits < int >::max();
    } else
    {
        for(int i=1; i<pos; i++)
        {
            temp=temp->link;
        }
        return temp->data;
    }

    return 0;
}

int LinkedList::search(int target)
{
    Node *temp = head;
    int currData = 0;
    int pos = 1;
    int size = 1;
    while(temp->link != nullptr)
    {
        temp=temp->link;
        size++;
    }

    temp = head;

    for(int i=0;i<size;i++)
    {   
        currData = temp->data; 
        if (currData == target) 
        {
            return pos;
        }
        temp=temp->link;
        pos++;
    }

    return -1;
}


void LinkedList::printList()
{
    Node* currNode = head;
    while (currNode != nullptr)
    {
        std::cout << "[" <<currNode->data << "] ";
        currNode = currNode->link;
    }
}