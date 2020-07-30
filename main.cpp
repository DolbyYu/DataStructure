//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "matrix.h"

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

    vector<vector<int>> image = {{0,0,0, 0},{0,1,0,1},{1,1,1,0}, {1,1,0,0}};
//    vector<vector<int>> image = {{0}};


    printVector(image);
    cout << endl;
    vector<vector<int>> result = solution.updateMatrix(image);
    printVector(result);

    return 0;

}