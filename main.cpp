//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "mergeMatrix.h"

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

    vector<vector<int>> image = {{1,3},{2,6},{8,10},{15,18}};
//    vector<vector<int>> image = {{1,4},{4,5}};
//    vector<vector<int>> image = {{1,4},{2,3}};
//    vector<vector<int>> image = {{2,3},{4,5},{6,7},{8,9},{1,10}};


//    vector<vector<int>> image = {{0}};


    auto result = solution.merge(image);
    printVector(result);

    return 0;

}