//
// Created by 余爱生 on 2020/5/30.
//

#ifndef DATASTRUCTURE_EVALRPN_H
#define DATASTRUCTURE_EVALRPN_H

#include <stack>
#include <string>
#include <cmath>

class EvalRPN {
public:
    int evalRPN(std::vector<std::string> &tokens) {

        std::stack<int> s;
        int ele1 = 0, ele2 = 0;

        for (const auto &str:tokens)
            if (str == "+") {
                ele1 = s.top();
                s.pop();
                ele2 = s.top();
                s.pop();
                s.push(ele2 + ele1);
            } else if (str == "-") {
                ele1 = s.top();
                s.pop();
                ele2 = s.top();
                s.pop();
                s.push(ele2 - ele1);
            } else if (str == "*") {
                ele1 = s.top();
                s.pop();
                ele2 = s.top();
                s.pop();
                s.push(ele2 * ele1);
            } else if (str == "/") {
                ele1 = s.top();
                s.pop();
                ele2 = s.top();
                s.pop();
                s.push(ele2 / ele1);
            } else
                s.push(atoi(str.c_str()));

        return s.top();
    }

};


#endif //DATASTRUCTURE_EVALRPN_H
