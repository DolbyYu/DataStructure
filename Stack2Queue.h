//
// Created by 余爱生 on 2020/7/26.
//

#ifndef DATASTRUCTURE_STACK2QUEUE_H
#define DATASTRUCTURE_STACK2QUEUE_H

#include <stack>

class MyQueue {
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }

    /** Push element x to the back of queue. */
    void push(int x) {

        s.push(x);

    }

    /** Removes the element from in front of queue and returns that element. */
    int pop() {

        for (int i = 0, queueSize = s.size(); i < queueSize; ++i){
            temp.push(s.top());
            s.pop();
        }

        ele = temp.top();
        temp.pop();

        for (int i = 0, queueSize = temp.size(); i < queueSize; ++i){
            s.push(temp.top());
            temp.pop();
        }


        return ele;

    }

    /** Get the front element. */
    int peek() {

        int size = s.size();

        for (int i = 0, queueSize = s.size(); i < queueSize; ++i){
            temp.push(s.top());
            s.pop();
        }

        ele = temp.top();

        for (int i = 0, queueSize = temp.size(); i < queueSize; ++i){
            s.push(temp.top());
            temp.pop();
        }

        return ele;

    }

    /** Returns whether the queue is empty. */
    bool empty() {

        return s.empty();

    }

private:

    std::stack<int> s;
    std::stack<int> temp;

    int ele;
    int queueSize;

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */

#endif //DATASTRUCTURE_STACK2QUEUE_H
