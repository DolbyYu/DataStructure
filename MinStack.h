//
// Created by 余爱生 on 2020/5/30.
//

#ifndef DATASTRUCTURE_MINSTACK_H
#define DATASTRUCTURE_MINSTACK_H


#include <stack>

class MinStack {
private:
    std::stack<int> s;
    std::stack<int> minEle;

public:
    /** initialize your data structure here. */
    MinStack() {
        minEle.push(INT_MAX);
    }

    void push(int x) {
        if(x<=minEle.top())
            minEle.push(x);

        s.push(x);

    }

    void pop() {
        if(s.top() == minEle.top())
            minEle.pop();

        s.pop();
    }

    int top() {
        return s.top();
    }

    int getMin() {
        return minEle.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */


#endif //DATASTRUCTURE_MINSTACK_H
