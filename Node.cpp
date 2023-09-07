#include "Node.h"

Node::Node()
{
    data = 0;
    link = NULL;
}
Node::Node(int data)
{
    this->data = data;
    link = NULL;
}