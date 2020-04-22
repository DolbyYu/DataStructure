//
// Created by aisheng on 2020/4/20.
//

#ifndef MYCIRCULARQUEUE_SOLUTION_H
#define MYCIRCULARQUEUE_SOLUTION_H

#include <vector>

using namespace std;

class Solution {
public:
    int numIslands(vector<vector<char>> &grid);

private:
    void search(vector<vector<char>> &grid, int x, int y);

};


#endif //MYCIRCULARQUEUE_SOLUTION_H
