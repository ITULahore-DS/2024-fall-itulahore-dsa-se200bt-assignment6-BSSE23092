#include "functions.h"

Node::Node(int val)
{
    data = val;
    next = nullptr;
}

Node::~Node()
{
    cout << "\n Destructor of Node ";
}

void Node::setNext(Node *nextNode)
{
    next = nextNode;
}

Node *Node::getNext()
{
    return next;
}

void Node::setData(int dataValue)
{
    data = dataValue;
}

int Node::getData()
{
    return data;
}

Stack::Stack()
{
    top = nullptr;
    count = 0;
}

Stack::~Stack()
{
    // cout << " \nDestructor of Stack ";
}

bool Stack::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

void Stack::push(int data)
{
    Node *new_node = new Node(data);
    if (isEmpty())
    {
        top = new_node;
        count++;
    }
    else
    {
        new_node->setNext(top);
        top = new_node;
        count++;
    }
}

void Stack::pop()
{
    if (isEmpty())
    {
        return;
    }
    Node *temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Stack::peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}

int Stack::size()
{
    return count;
}

void Stack::clear()
{
    while (!isEmpty())
    {
        pop();
    }
}

void Stack::printStack()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

Queue::Queue()
{
    top = nullptr;
    count = 0;
}

Queue::~Queue()
{
    // cout << " \nDestructor of Stack ";
}

bool Queue::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

void Queue::enqueue(int data)
{
    Node *new_node = new Node(data);
    if (isEmpty())
    {
        top = new_node;
        count++;
    }
    else
    {
        Node *temp = top;
        while (temp->getNext() != nullptr)
        {
            temp = temp->getNext();
        }
        temp->setNext(new_node);
        count++;
    }
}

void Queue::dequeue()
{
    if (isEmpty())
    {
        return;
    }
    Node *temp = top;
    top = top->getNext();
    delete temp;
    count--;
}

int Queue::peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}

int Queue::size()
{
    return count;
}

void Queue::clear()
{
    while (!isEmpty())
    {
        dequeue();
    }
}

void Queue::printStack()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}
