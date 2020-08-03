//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>

#include "findDiagonalOrder.h"

using namespace std;

void printVector(vector<int> &image){

        for (auto ele : image) {
            cout << ele << "\t";
        }


}

int main() {

    Solution solution;

    vector<vector<int>> image = {{}};


//    vector<vector<int>> image = {{0}};


    auto result = solution.findDiagonalOrder(image);
    printVector(result);

    return 0;

}