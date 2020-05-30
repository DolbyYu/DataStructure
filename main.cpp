//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>
#include "EvalRPN.h"
#include <sys/time.h>

using namespace std;

static unsigned long get_current_time() {
    struct timeval tv{};

    gettimeofday(&tv, nullptr);

    return (tv.tv_sec * 1000000 + tv.tv_usec);
}

int main() {

    vector<string> tokens = {"10", "6", "9", "3", "+", "-11", "*", "/", "*", "17", "+", "5", "+"};
    //your output should be [1, 1, 4, 2, 1, 1, 0, 0]

    EvalRPN evalRpn;

    cout << evalRpn.evalRPN(tokens);

    return 0;

}