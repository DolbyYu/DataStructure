//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_PIVOTINDEX_H
#define DATASTRUCTURE_PIVOTINDEX_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int size = nums.size();

        int i;
        for (i = 0; i < size; ++i){
            if (nums.at(i) > target)
                break;
            else if (nums.at(i) == target)
                return i;
        }

        auto iter = nums.begin() + i;
        nums.insert(iter, target);
        return i;

    }

};

#endif //DATASTRUCTURE_PIVOTINDEX_H
