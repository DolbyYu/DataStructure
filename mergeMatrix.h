//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_MERGEMATRIX_H
#define DATASTRUCTURE_MERGEMATRIX_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n = matrix.size();
        int halfN = n/2;

        for (int i = 0; i < halfN; ++i)
            for (int j =0; j < n; ++j)
                swap(matrix.at(i).at(j), matrix.at(n-i-1).at(j));


        for (int i = 0; i < n; ++i)
            for (int j = 0; j < i; ++j)
                swap(matrix.at(i).at(j), matrix.at(j).at(i));


    }
};

#endif //DATASTRUCTURE_MERGEMATRIX_H
