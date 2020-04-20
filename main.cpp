//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "MyCircularQueue.h"

using namespace std;

int main() {
    MyCircularQueue myCircularQueue(3);

    cout << myCircularQueue.isFull();
    cout << myCircularQueue.enQueue(1);
    cout << myCircularQueue.enQueue(2);
    cout << myCircularQueue.enQueue(3);
    cout << myCircularQueue.enQueue(4);
    cout << myCircularQueue.Rear() << endl;
    cout << myCircularQueue.isFull();
    cout << myCircularQueue.deQueue();
    cout << myCircularQueue.enQueue(4);
    cout << myCircularQueue.Rear();
    cout << myCircularQueue.Front() << endl;
//    cout << myCircularQueue.deQueue();
//    cout << myCircularQueue.deQueue();
//    cout << myCircularQueue.deQueue();
//    cout << myCircularQueue.deQueue();
//    cout << myCircularQueue.Rear() << endl;

    cout << myCircularQueue.movingAvg(2) << endl;
    return 0;

}