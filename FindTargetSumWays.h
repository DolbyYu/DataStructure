//
// Created by 余爱生 on 2020/6/26.
//

#ifndef DATASTRUCTURE_FINDTARGETSUMWAYS_H
#define DATASTRUCTURE_FINDTARGETSUMWAYS_H

#include <vector>
#include <queue>
#include <cmath>

class FindTargetSumWays {
public:
    int findTargetSumWays(std::vector<int>& nums, int S) {
        Sum = S;
        calculate(nums, 0, 0);
        return count*(1<<stepNum);
    }

private:
    int count = 0;
    int Sum = 0;
    int queue[20] = {0};
    int stepNum = 0;

    void calculate(std::vector<int>& nums, int curIndex, int sum){

        if (curIndex == nums.size()){
            if (sum == Sum)
                count++;
        } else
        {   
            if (nums[curIndex] == 0) {

                indexMemo(curIndex);
                calculate(nums, curIndex+1, sum + nums[curIndex]);

            }else{
                calculate(nums, curIndex+1, sum - nums[curIndex]);
                calculate(nums, curIndex+1, sum + nums[curIndex]);
            }

        }

    }

    void indexMemo(int index){
        for (int i = 0; i<stepNum; ++i){
            if (queue[i] == index)
                return;
        }

        queue[stepNum++] = index;


    }
};
#endif //DATASTRUCTURE_FINDTARGETSUMWAYS_H
