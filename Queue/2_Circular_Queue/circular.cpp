#include <bits/stdc++.h>
class CircularQueue
{
public:
    int *arr;
    int rear, front, size;

    CircularQueue(int n)
    {
        size = n;
        arr = new int[size];
        rear = front = -1;
    }
    // Enqueues 'X' into the queue. Returns true if it gets pushed into the stack, and false otherwise.
    bool enqueue(int value)
    {
        // Check if queue is full
        if ((front == 0 && rear == size - 1) || ((rear + 1 ) % size == front))
               return false;
        else if (front == -1)
        {
            rear = front = 0;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
        }
        else
        {   // Push the element
            rear++;
        }
        arr[rear] = value;
        return true;
    }

    // Dequeues top element from queue. Returns -1 if the stack is empty, otherwise returns the popped element.

    int dequeue()
    {
        // Check if the queue is empty
        if (front == -1)
            return -1;
        int ele = arr[front];
        arr[front] = -1;
        if (front == rear)
        {
            front = rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            front++;
        }
        return ele;
    }
};