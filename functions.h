#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val);

    ~Node();

    void setNext(Node* nextNode);

    Node* getNext();

    void setData(int dataValue);

    int getData();

};


class Stack{
    Node* top;
    int count;
    public:
    Stack();
    
    ~Stack();

    bool isEmpty();

    void push(int data);

    void pop();

    int peek();

    int size();

    void clear();

    void printStack();

};

class Queue{
    int count;
    Node* top;
    public:
    Queue();
    
    ~Queue();

    bool isEmpty();

    void enqueue(int data);

    void dequeue();

    int peek();

    int size();

    void clear();

    void printQueue();

};

#endif