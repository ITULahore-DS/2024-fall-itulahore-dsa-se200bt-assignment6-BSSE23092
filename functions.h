#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
using namespace std;

class Node{
    int data;
    Node* next;
    public:
    Node(int val){
        data = val;
        next = nullptr;
    }

    ~Node(){
        // cout << "\n Destructor of Node ";
    }

    void setNext(Node* nextNode){
        next = nextNode;
    }

    Node* getNext(){
        return next;
    }

    void setData(int dataValue){
        data = dataValue;
    }

    int getData(){
        return data;
    }

};


class Stack{
    Node* top;
    int count;
    public:
    Stack(){
        top = nullptr;
        count = 0;
    }
    
    ~Stack(){
        // cout << " \nDestructor of Stack ";
    }

    bool isEmpty(){
        if(top == nullptr){
            return true;
        }
        return false;
    }

    void push(int data){
        Node* new_node = new Node(data);
        if(isEmpty()){
            top = new_node;
            count++;
        }        
        else{
        new_node->setNext(top);
        top = new_node;
        count++;
        }
    }

    void pop(){
        if(isEmpty()){
            return;
        }
        Node* temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }

    int peek(){
        if(isEmpty()){
            return -1;
        }
        return top->getData();
    }

    int size(){
        return count;
    }

    void clear(){
        while(!isEmpty()){
            pop();
        }
    }

    void printStack(){
        Node* temp = top;
        while(temp != nullptr){
            cout <<temp->getData() << " ";
            temp = temp->getNext();
        }
    }

};

class Queue{
    int count;
    Node* top;
    public:
    Queue(){
        top = nullptr;
        count = 0;
    }
    
    ~Queue(){
        // cout << " \nDestructor of Stack ";
    }

    bool isEmpty(){
        if(top == nullptr){
            return true;
        }
        return false;
    }

    void enqueue(int data){
        Node* new_node = new Node(data);
        if(isEmpty()){
            top = new_node;
            count++;
        }        
        else{
            Node* temp = top;
            while(temp->getNext() != nullptr){
                temp = temp->getNext();
            }
            temp->setNext(new_node);
            count++;
        }
    }

    void dequeue(){
        if(isEmpty()){
            return;
        }
        Node* temp = top;
        top = top->getNext();
        delete temp;
        count--;
    }

    int peek(){
        if(isEmpty()){
            return -1;
        }
        return top->getData();
    }

    int size(){
        return count;
    }

    void clear(){
        while(!isEmpty()){
            dequeue();
        }
    }

    void printStack(){
        Node* temp = top;
        while(temp != nullptr){
            cout <<temp->getData() << " ";
            temp = temp->getNext();
        }
    }

};

#endif