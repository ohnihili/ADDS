#include <iostream>
#include <vector>
#include <limits>
#include "Node.h"
#include "LinkedList.h"

using namespace std;

int main()
{
    int array[5] = {1,2,3,4,5};

    // Node newnode(5);

    // LinkedList list;

    // list.insertPosition(1, 1);
    // list.insertPosition(1, 2);
    // list.insertPosition(1, 3);
    // list.insertPosition(1, 4);
    // list.printList();

    LinkedList list(array, 5);
    list.printList();

    std::cout << std::endl;

    list.insertPosition(6,9);
    list.printList();

    std::cout << std::endl;

    list.deletePosition(3);
    list.printList();

    std::cout << std::endl;

    std::cout << list.get(3) << std::endl;

    std::cout << list.search(19) << std::endl;
    
}