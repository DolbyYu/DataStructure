//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "FindTargetSumWays.h"

using namespace std;

int main() {

    vector<int> nums = {0,0,0,0,0,0,0,0,1};
//    vector<int> nums = {1,0};
    int target = 1;
    //your output should be [1, 1, 4, 2, 1, 1, 0, 0]

    FindTargetSumWays findTargetSumWays;

    cout << findTargetSumWays.findTargetSumWays(nums, target);

    return 0;

}