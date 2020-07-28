//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_DECODESTRING_H
#define DATASTRUCTURE_DECODESTRING_H

#include <string>
#include <stack>
#include <cmath>

using namespace std;

class Solution {
public:
    string decodeString(string s) {

        int k = 0;
        string encodeString = "";

        for (auto ele:s) {
            if (ele != ']')
                st.push(ele);
            else {
                for (int i = 0, size = st.size(); i < size;++i)
                {
                    char c = st.top();
                    st.pop();

                    if (c != '[')
                        encodeString += c;
                    else {

                        k = getK();

                        string tempS;
                        for (int j = 0; j < k; ++j){
                            tempS += encodeString;
                        }
                        encodeString = tempS;

                        for (auto iter = encodeString.end() - 1; iter >= encodeString.begin(); --iter)
                            st.push(*iter);

                        encodeString = "";

                        break;

                    }
                }
            }
        }

        char returnStr[st.size()+1];
        returnStr[st.size()] = '\0';
        for (int i = st.size() - 1; i >= 0; --i){

            returnStr[i] = st.top();
            st.pop();

        }

        return returnStr;

    }

private:
    stack<char> st;

    int getK(){

        char ele;
        int k = 0;
        for (int i = 0, size = st.size(); i < size; ++i){
            ele = st.top();
            if ('0' <= ele && ele <= '9')
            {
                k += pow(10,i)*(ele - '0');
                st.pop();
            } else
                return k;
        }

        return k;

    }
};

#endif //DATASTRUCTURE_DECODESTRING_H
