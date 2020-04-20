//
// Created by aisheng on 2020/4/20.
//

#ifndef DATASTRUCTURE_MYCIRCULARQUEUE_H
#define DATASTRUCTURE_MYCIRCULARQUEUE_H


class MyCircularQueue {
public:
    /** Initialize your data structure here. Set the size of the queue to be k. */
    explicit MyCircularQueue(int k);
    ~MyCircularQueue();

    /** Insert an element into the circular queue. Return true if the operation is successful. */
    bool enQueue(int value);

    /** Delete an element from the circular queue. Return true if the operation is successful. */
    bool deQueue();

    /** Get the front item from the queue. */
    int Front();

    /** Get the last item from the queue. */
    int Rear();

    /** Checks whether the circular queue is empty or not. */
    bool isEmpty();

    /** Checks whether the circular queue is full or not. */
    bool isFull();

private:
    int *myQueue;
    int front, rear;
    int queueSize;

};


#endif //DATASTRUCTURE_MYCIRCULARQUEUE_H
