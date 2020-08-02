//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "pivotIndex.h"

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

//    vector<int> image = {1, 7, 3, 6, 5, 6};
    vector<int> image = {1,3,5,6};

//    vector<vector<int>> image = {{0}};


    auto result = solution.searchInsert(image,0);
    cout << result << endl;

    return 0;

}