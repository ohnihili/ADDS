#include "Node.h"

Node::Node()
{
    data = 0;
    link = nullptr;
}
Node::Node(int data)
{
    this->data = data;
    link = nullptr;
}