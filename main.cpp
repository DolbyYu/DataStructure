//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "Queue2Stack.h"

using namespace std;

int main() {

    MyStack myStack;

    myStack.push(1);
    myStack.push(2);
    myStack.push(3);
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;
    cout << myStack.pop() << endl;

    //    cout << myStack.top() << endl;
    cout << myStack.empty() << endl;


    return 0;

}