//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_MERGE_H
#define DATASTRUCTURE_MERGE_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<vector<int>> v;
        vector<int> ele;

        sort(intervals.begin(), intervals.end());

        for(auto iter = intervals.begin(); iter < intervals.end(); ++iter){

            ele.clear();
            ele.push_back(iter->at(0));
            ele.push_back(iter->at(1));

            while (iter + 1 != intervals.end()){

                if (ele.at(1) >= (iter+1)->at(0)){
                    ++iter;
                    ele.at(1) = ele.at(1) > iter->at(1)?ele.at(1) : iter->at(1);

                }
                else
                    break;
            }

            v.push_back(ele);

        }

        return v;

    }
};

#endif //DATASTRUCTURE_MERGE_H
