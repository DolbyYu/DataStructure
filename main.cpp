//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "setZeroes.h"

using namespace std;

void printVector(vector<vector<int>> &image){

    for (const auto& row:image) {
        for (auto ele : row) {
            cout << ele << "\t";
        }
        cout << endl;
    }

}

int main() {

    Solution solution;

    vector<vector<int>> image = {
            {0,1,2,0},
                {3,4,5,2},
                    {1,3,1,5}
};


//    vector<vector<int>> image = {{0}};


    solution.setZeroes(image);
    printVector(image);

    return 0;

}