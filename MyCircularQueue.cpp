//
// Created by aisheng on 2020/4/20.
//

#include "MyCircularQueue.h"
#include <memory>

MyCircularQueue::MyCircularQueue(int k) {
    queueSize = k;
    myQueue = (int *) malloc(sizeof(int) * queueSize);
    rear = -1;
    front = -1;
}

bool MyCircularQueue::enQueue(int value) {
    if (isFull())
        return false;
    if (isEmpty())
        front = 0;

    if (++rear >= queueSize)
        rear = 0;

    myQueue[rear] = value;

    return true;

}

bool MyCircularQueue::deQueue() {
    if (isEmpty())
        return false;

    if (front == rear) {
        front = -1;
        rear = -1;
        return true;
    }

    if (++front >= queueSize)
        front = 0;

    return true;

}

int MyCircularQueue::Front() {
    if (isEmpty())
        return -1;

    return myQueue[front];
}

int MyCircularQueue::Rear() {
    if (isEmpty())
        return -1;

    return myQueue[rear];
}

bool MyCircularQueue::isFull() {
    if (isEmpty())
        return false;

    if (front == 0 && rear == (queueSize - 1))
        return true;

    return (front - 1) == rear;

}

bool MyCircularQueue::isEmpty() {
    return front == -1 && rear == -1;
}

MyCircularQueue::~MyCircularQueue() {
    free(myQueue);
}
