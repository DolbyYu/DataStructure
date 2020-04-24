//
// Created by aisheng on 2020/4/20.
//

#include "Solution.h"
#include <queue>
#include <iostream>

int Solution::numIslands(vector<vector<char>> &grid) {
    int islandsNum = 0;
    int mapHeight = grid.size();
    if (mapHeight == 0)
        return 0;
    int mapWidth = grid.at(0).size();
    if (mapWidth == 0)
        return 0;

    for (int i = 0; i < mapHeight; ++i)
        for (int j = 0; j < mapWidth; ++j)
            if (grid.at(i).at(j) == '1') {
                ++islandsNum;
                search2(grid, i, j);
            }

    return islandsNum;
}

void Solution::search(vector<vector<char>> &grid, int positionH, int positionW) {

    grid.at(positionH).at(positionW) = '0';

    if (positionH + 1 < grid.size() && grid.at(positionH + 1).at(positionW) == '1')
        search(grid, positionH + 1, positionW);
    if (positionH > 0 && grid.at(positionH - 1).at(positionW) == '1')
        search(grid, positionH - 1, positionW);
    if (positionW > 0 && grid.at(positionH).at(positionW - 1) == '1')
        search(grid, positionH, positionW - 1);
    if (positionW + 1 < grid.at(0).size() && grid.at(positionH).at(positionW + 1) == '1')
        search(grid, positionH, positionW + 1);

}

void Solution::search2(vector<vector<char>> &grid, int positionH, int positionW) {

    grid.at(positionH).at(positionW) = '0';

    queue<pair<int, int>> tempQueue;
    tempQueue.push(make_pair(positionH, positionW));

    while (!tempQueue.empty()) {
        pair<int, int> position = tempQueue.front();
        tempQueue.pop();
        int h = position.first;
        int w = position.second;
        if (h + 1 < grid.size() && grid.at(h + 1).at(w) == '1') {
            grid.at(h + 1).at(w) = '0';
            tempQueue.push(make_pair(h + 1, w));
        }

        if (h > 0 && grid.at(h - 1).at(w) == '1') {
            grid.at(h - 1).at(w) = '0';
            tempQueue.push(make_pair(h - 1, w));
        }
        if (w > 0 && grid.at(h).at(w - 1) == '1') {
            grid.at(h).at(w - 1) = '0';
            tempQueue.push(make_pair(h, w - 1));
        }
        if (w + 1 < grid.at(0).size() && grid.at(h).at(w + 1) == '1') {
            grid.at(h).at(w + 1) = '0';
            tempQueue.push(make_pair(h, w + 1));
        }
    }

}




