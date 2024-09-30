#include "functions.h"


// constructor
Node::Node(int val)
{
    data = val;
    next = nullptr;
}

// destructor
Node::~Node()
{
    cout << "\n Destructor of Node ";
}

// set a node to next
void Node::setNext(Node *nextNode)
{
    next = nextNode;
}

// get next of a node
Node *Node::getNext()
{
    return next;
}

// set data in a node
void Node::setData(int dataValue)
{
    data = dataValue;
}

// get data of a node
int Node::getData()
{
    return data;
}

// constructor of stack
Stack::Stack()
{
    top = nullptr;
    count = 0;
}

// destructor
Stack::~Stack()
{
    // cout << " \nDestructor of Stack ";
}

// check stack is empty 
bool Stack::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

// puch a value in a stack
void Stack::push(int data)
{
    Node *new_node = new Node(data);
    if (isEmpty())
    {
        top = new_node;
        count++;  //update count
    }
    else
    {
        new_node->setNext(top);     
        top = new_node;   //update the top
        count++;
    }
}

// remove the top 
void Stack::pop()
{
    if (isEmpty())
    {
        return;
    }
    Node *temp = top;
    top = top->getNext();    //update top
    delete temp;
    count--;
}


// return peak of the stack
int Stack::peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}

// return the size of stack
int Stack::size()
{
    return count;
}

// clear the stack
void Stack::clear()
{
    while (!isEmpty())
    {
        pop();
    }
}

// print the stack
void Stack::printStack()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
}

// constructor of queue
Queue::Queue()
{
    top = nullptr;
    count = 0;
}

// destructor
Queue::~Queue()
{
    // cout << " \nDestructor of Stack ";
}

// check queue is empty 
bool Queue::isEmpty()
{
    if (top == nullptr)
    {
        return true;
    }
    return false;
}

// puch a value in a queue
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

// remove the top 
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

// return peak of the queue
int Queue::peek()
{
    if (isEmpty())
    {
        return -1;
    }
    return top->getData();
}

// return the size of queue
int Queue::size()
{
    return count;
}

// clear the queue
void Queue::clear()
{
    while (!isEmpty())
    {
        dequeue();
    }
}

// print the queue
void Queue::printQueue()
{
    Node *temp = top;
    while (temp != nullptr)
    {
        cout << temp->getData() << " ";
        temp = temp->getNext();
    }
    cout << "\n";
}
