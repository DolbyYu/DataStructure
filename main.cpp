//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "MyCircularQueue.h"

using namespace std;

int main(){
    MyCircularQueue myCircularQueue(3);

    cout << myCircularQueue.enQueue(1) << endl;
    cout << myCircularQueue.enQueue(2) << endl;
    cout << myCircularQueue.enQueue(3) << endl;
    cout << myCircularQueue.enQueue(4) << endl;
    cout << myCircularQueue.Rear() << endl;
    cout << myCircularQueue.isFull() << endl;
    cout << myCircularQueue.deQueue() << endl;
    cout << myCircularQueue.enQueue(4) << endl;
    cout << myCircularQueue.Rear() << endl;

    return 0;

}