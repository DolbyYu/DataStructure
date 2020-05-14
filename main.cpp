//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "OpenLock.h"

using namespace std;

int main() {

    string deadEndsLib[] = {
            "8888",
    };

    vector<string> deadEnds;
    deadEnds.clear();
    for (auto &ele : deadEndsLib) {
        deadEnds.push_back(ele);
    }

    string target = "8888";

    OpenLock oOpenLock(4);

    int step = oOpenLock.openLock(deadEnds, target);

    cout << step;

    return 0;

}