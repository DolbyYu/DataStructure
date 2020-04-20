//
// Created by aisheng on 2020/4/20.
//

#ifndef DATASTRUCTURE_MYCIRCULARQUEUE_H
#define DATASTRUCTURE_MYCIRCULARQUEUE_H


class MyCircularQueue {
public:
    explicit MyCircularQueue(int k);
    bool enQueue(int value);
    bool deQueue();
    int Front();
    int Rear();
    bool isEmpty();
    bool isFull();

private:
    int *myQueue;
    int front, rear;
    int queueSize;

};


#endif //DATASTRUCTURE_MYCIRCULARQUEUE_H
