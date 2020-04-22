//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <queue>
#include <vector>
#include <cstdlib>
#include "Solution.h"

using namespace std;

void gridInit(vector<vector<char>> &grid, int w, int h) {

    grid.resize(h);
    for (auto &line:grid)
        line.resize(w);

    for (auto &line:grid)
        for (auto &pixel:line)
            pixel = (char) ('0' + rand() % 2);
}

int main() {

    Solution solution;
    vector<vector<char>> grid;
    gridInit(grid, 5, 5);
    for (const auto &line : grid) {
        for (auto pixel:line)
            cout << pixel;
        cout << endl;
    }

    cout << "islandNum: " << solution.numIslands(grid);

    return 0;

}