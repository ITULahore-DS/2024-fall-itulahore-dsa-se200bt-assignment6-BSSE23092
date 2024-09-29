#include <iostream>
#include "functions.h"
using namespace std;

int main()
{
    int num = -1;
    while (true)
    {
        cout << "\n\n1.Stack\n2.Queue\n0.Exit\nEnter: ";
        cin >> num;
        if (num == 1)
        {
            while (true)
            {
                int num1;
                cout << "\n1.Push\n2.Pop\n0.Exit\nEnter: ";
                cin >> num1;
                if (num1 == 1)
                {
                    Stack myStack;

                    // Push elements onto the stack
                    myStack.push(10);
                    myStack.push(20);
                    myStack.push(30);
                    myStack.printStack();
                }
                else if (num1 == 2)
                {
                    Stack myStack;

                    // Push elements onto the stack
                    myStack.push(10);
                    myStack.push(20);
                    myStack.push(30);
                    cout << " Before Pop: ";
                    myStack.printStack();
                    myStack.pop();
                    cout << "After Pop: ";
                    myStack.printStack();
                }
                else if (num1 == 0)
                {
                    break;
                }
            }
        }
        else if (num == 2)
        {
            while (true)
            {
                int num1;
                cout << "\n1.Enqueue\n2.Dequeue\n0.Exit\nEnter: ";
                cin >> num1;
                if (num1 == 1)
                {
                    Queue myQueue;

                    // Enqueue elements into the queue
                    myQueue.enqueue(10);
                    myQueue.enqueue(20);
                    myQueue.enqueue(30);
                    myQueue.printQueue();
                }
                else if (num1 == 2)
                {
                    Queue myQueue;

                    // Enqueue elements into the queue
                    myQueue.enqueue(10);
                    myQueue.enqueue(20);
                    myQueue.enqueue(30);
                    cout << " Before Dequeue: ";
                    myQueue.printQueue();
                    myQueue.dequeue();
                    cout << " After Dequeue: ";
                    myQueue.printQueue();
                }
                else if (num1 == 0)
                {
                    break;
                }
            }
        }
    }
    return 0;
}