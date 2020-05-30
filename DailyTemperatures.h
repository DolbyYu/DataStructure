//
// Created by 余爱生 on 2020/5/30.
//

#ifndef DATASTRUCTURE_DAILYTEMPERATURES_H
#define DATASTRUCTURE_DAILYTEMPERATURES_H

#include <vector>
#include <stack>

class Solution {
public:
    std::vector<int> dailyTemperatures(std::vector<int>& T) {

        std::vector<int> result;
        int i = 0;
        bool haveDay = false;

        for(auto iter = T.begin(); iter != T.end(); ++iter) {
            for (auto iter2 = iter; iter2 != T.end(); ++iter2) {
                if (*iter2 > *iter) {
                    haveDay = true;
                    break;
                }
                else
                    ++i;

            }
            if(haveDay)
                result.push_back(i);
            else
                result.push_back(0);
            i=0;
            haveDay = false;
        }

        return result;


    }

    std::vector<int> dailyTemperatures2(std::vector<int>& T) {

        // first:index; second:value
        std::stack<std::pair<int,int>> s;
        std::vector<int> v;
        if(T.empty())
            return v;

        int i = T.size();
        while (i>0) {
            --i;
            /* 栈中保留有序元素，以及元素索引 */
            while (!s.empty() && (T.at(i) >= s.top().second))
                s.pop();

            if(s.empty())
                v.push_back(0);
            else
                v.push_back(s.top().first - i);
            s.push(std::make_pair(i, T.at(i)));
        }

        std::reverse (v.begin(), v.end());

        return v;

    }

};


#endif //DATASTRUCTURE_DAILYTEMPERATURES_H
