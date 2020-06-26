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
    // 深度优先算法 DFS
    // 递归
    static void search(vector<vector<char>> &grid, int x, int y);

    // 广度优先算法 BFS
    // 同心环
    static void search2(vector<vector<char>> &grid, int x, int y);


public:


};


#endif //MYCIRCULARQUEUE_SOLUTION_H
