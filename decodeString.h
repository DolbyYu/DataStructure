//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_DECODESTRING_H
#define DATASTRUCTURE_DECODESTRING_H

#include <string>
#include <stack>

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
                        k = st.top() - '0';
                        st.pop();

                        string tempS = encodeString;
                        encodeString = "";
                        for (int i = 0; i < k; ++i){
                            encodeString += tempS;
                        }

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

    void pushStringInStack(string s){



    }
};

#endif //DATASTRUCTURE_DECODESTRING_H
