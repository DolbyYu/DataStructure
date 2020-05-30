//
// Created by 余爱生 on 2020/5/30.
//

#ifndef DATASTRUCTURE_ISVALID_H
#define DATASTRUCTURE_ISVALID_H

#include <string>
#include <stack>

class IsValid {
public:
    bool isValid(std::string &s) {
        std::stack<char> stack;
        for (char &c : s) {
            if (c == ')' || c == '}' || c == ']') {
                if (stack.empty())
                    return false;
                switch (c) {
                    case ')':
                        if (stack.top() == '(')
                            stack.pop();
                        else
                            return false;
                        break;
                    case '}':
                        if (stack.top() == '{')
                            stack.pop();
                        else
                            return false;
                        break;
                    case ']':
                        if (stack.top() == '[')
                            stack.pop();
                        else
                            return false;
                        break;
                    default:
                        break;
                }

            } else
                stack.push(c);

        }
        return stack.empty();
    }

};


#endif //DATASTRUCTURE_ISVALID_H
