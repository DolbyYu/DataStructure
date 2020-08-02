//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_SETZEROES_H
#define DATASTRUCTURE_SETZEROES_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        int m = matrix.size();
        int n = matrix.at(0).size();

        vector<vector<int>> seen(m, vector<int>(n,0));

        for (int i = 0; i < m; ++i)
            for (int j = 0; j < n; ++j){
                if ( seen.at(i).at(j) == 1)
                    continue;

                seen.at(i).at(j) = 1;
                if (matrix.at(i).at(j) == 0)
                {
                    for (int x = 0; x < n; ++x){
                        if (matrix.at(i).at(x) == 0)
                            continue;
                        matrix.at(i).at(x) = 0;
                        seen.at(i).at(x) = 1;
                    }

                    for (int y = 0; y < m; ++y){
                        if(matrix.at(y).at(j) == 0)
                            continue;
                        matrix.at(y).at(j) = 0;
                        seen.at(y).at(j) = 1;

                    }

                }
            }

    }
};

#endif //DATASTRUCTURE_SETZEROES_H
