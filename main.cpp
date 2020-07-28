//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "Stack2Queue.h"

using namespace std;

int main() {

    MyQueue myQueue;

    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);
    cout << myQueue.peek() << endl;


    return 0;

}