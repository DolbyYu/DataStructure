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


    std::cout << "size: " << mapWidth << "x" << mapHeight << std::endl;

    for (int i = 0; i < mapHeight; ++i)
        for (int j = 0; j < mapWidth; ++j)
            if (grid.at(i).at(j) == '1') {
                ++islandsNum;
                search(grid, i, j);
            }

    return islandsNum;
}

void Solution::search(vector<vector<char>> &grid, int positionH, int positionW) {

    grid.at(positionH).at(positionW) = '2';

    if (positionH + 1 < grid.size() && grid.at(positionH + 1).at(positionW) == '1')
        search(grid, positionH + 1, positionW);
    if (positionH > 0 && grid.at(positionH - 1).at(positionW) == '1')
        search(grid, positionH - 1, positionW);
    if (positionW > 0 && grid.at(positionH).at(positionW - 1) == '1')
        search(grid, positionH, positionW - 1);
    if (positionW + 1 < grid.at(0).size() && grid.at(positionH).at(positionW + 1) == '1')
        search(grid, positionH, positionW + 1);

}

