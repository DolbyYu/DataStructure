//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "MinStack.h"
#include <sys/time.h>

using namespace std;

static unsigned long get_current_time() {
    struct timeval tv{};

    gettimeofday(&tv, nullptr);

    return (tv.tv_sec * 1000000 + tv.tv_usec);
}

int main() {

    MinStack minStack;
    minStack.push(-2);
    minStack.push(0);
    minStack.push(-3);
    cout << minStack.getMin() << endl; // return -3
    minStack.pop();
    cout << minStack.top() << endl;    // return 0
    cout << minStack.getMin() << endl; // return -2


    return 0;

}