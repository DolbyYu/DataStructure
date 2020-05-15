//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "OpenLock.h"

using namespace std;

int main() {

    vector<string> deadEnds{"1111", "2222", "1234"};
    string target = "0001";

    OpenLock oOpenLock(4);

    cout << oOpenLock.openLock(deadEnds, target) << endl;


    return 0;

}