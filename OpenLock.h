//
// Created by aisheng on 2020/5/13.
//

#ifndef DATASTRUCTURE_OPENLOCK_H
#define DATASTRUCTURE_OPENLOCK_H

#include <vector>
#include <cstdlib>
#include <string>

class OpenLock {

public:
    int openLock(std::vector<string> &deadEnds, string &target);

private:
    bool inDeadEnds(std::vector<string> &deadEnds, string &current);

};


#endif
