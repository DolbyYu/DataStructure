//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "canVisitAllRooms.h"

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

    vector<vector<int>> image = {{1},{2},{3},{}};
//    vector<vector<int>> image = {{0}};


    printVector(image);
    cout << endl;
    auto result = solution.canVisitAllRooms(image);
    cout << result << endl;

    return 0;

}