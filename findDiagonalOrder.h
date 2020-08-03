//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_FINDDIAGONALORDER_H
#define DATASTRUCTURE_FINDDIAGONALORDER_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& matrix) {

        vector<int> v;

        int m = matrix.size();
        if (m == 0)
            return v;
        int n =matrix.at(0).size();
        if(n == 0)
            return v;

        int maxIndexSum = m - 1 + n - 1;

        int dir = 0;
        int index1=0, index2=0;

        v.push_back(matrix.at(0).at(0));
        for (int i = 1; i <= maxIndexSum; ++i)

            if (dir == 0) {
                if (index2 + 1 < n)
                    index2 += 1;
                else
                    index1 += 1;

                while (true){
                    v.push_back(matrix.at(index1).at(index2));
                    if (index1 + 1 >= m || index2 - 1 < 0)
                        break;

                    ++index1;
                    --index2;
                }

                dir = 1;
            }else{

                if (index1 + 1 < m)
                    index1 += 1;
                else
                    index2 += 1;

                while (true){
                    v.push_back(matrix.at(index1).at(index2));
                    if (index1 - 1 < 0 || index2 + 1 >= n)
                        break;

                    --index1;
                    ++index2;
                }

                dir = 0;

            }

        return v;



    }
};

#endif //DATASTRUCTURE_FINDDIAGONALORDER_H
