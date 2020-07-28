//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_QUEUE2STACK_H
#define DATASTRUCTURE_QUEUE2STACK_H

#include <queue>

class MyStack {
public:
    /** Initialize your data structure here. */
    MyStack() {

    }

    /** Push element x onto stack. */
    void push(int x) {

        q.push(x);

    }

    /** Removes the element on top of the stack and returns that element. */
    int pop() {

        std::queue<int> temp;

        for (int i = 0, size = q.size(); i < size - 1; ++i){
            temp.push(q.front());
            q.pop();
        }

        int ele = q.front();
        q.pop();

        for (int i = 0, size = temp.size(); i < size; ++i){
            q.push(temp.front());
            temp.pop();
        }

        return ele;

    }

    /** Get the top element. */
    int top() {

        return q.back();

    }

    /** Returns whether the stack is empty. */
    bool empty() {

        return q.empty();

    }

private:
    std::queue<int> q;

};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

#endif //DATASTRUCTURE_QUEUE2STACK_H
