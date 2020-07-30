//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_MATRIX_H
#define DATASTRUCTURE_MATRIX_H

#include <vector>
#include <queue>

using namespace std;

class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>> &matrix) {

        int h = matrix.size();
        int w = matrix.at(0).size();

       queue <pair<int, int>> q;
       vector<vector<int>> visited(h, vector<int>(w));
       vector<vector<int>> returnM(h, vector<int>(w));

       for (int hi = 0; hi < h; ++hi)
           for (int wj = 0; wj < w; ++wj){
               if (matrix.at(hi).at(wj) == 0) {
                   q.emplace(hi, wj);
                   visited.at(hi).at(wj) = 1;
               }
           }

       while(!q.empty()){
            auto pairs = q.front();
            q.pop();

            for (auto & direction : directions){
                int hi = pairs.first + direction[0];
                int wj = pairs.second + direction[1];

                if (hi >= 0 && hi < w && wj >=0 && wj < h && 1 != visited.at(hi).at(wj)){
                    q.emplace(hi,wj);
                    visited.at(hi).at(wj) = 1;
                    returnM.at(hi).at(wj) = returnM.at(pairs.first).at(pairs.second) + 1;
                }
            }
       }

        return returnM;

    }

private:

    int directions[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};


};

#endif //DATASTRUCTURE_MATRIX_H
