//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "OpenLock.h"

using namespace std;

int main() {

    string deadEndsLib[3] = {
            "0012",
            "1234",
            "4556"
    };

    vector<string> deadEnds;
    deadEnds.clear();
    for (auto & ele : deadEndsLib) {
        deadEnds.push_back(ele);
    }

    string target = "0099";

    OpenLock oOpenLock;

    int step = oOpenLock.openLock(deadEnds,target);

    cout << step;

    return 0;

}