//
// Created by aisheng on 2020/5/13.
//

#ifndef DATASTRUCTURE_OPENLOCK_H
#define DATASTRUCTURE_OPENLOCK_H

#include <vector>
#include <cstdlib>
#include <string>
#include <unordered_set>
#include <queue>


class OpenLock {

public:
    explicit OpenLock(int slotWidth) : LOCK_SLOT_W(slotWidth) {}

    int openLock(std::vector<std::string> &deadEnds, std::string &target);

private:

    static std::string int2String(int number, int lockSlotSize);

    void pushNeigh(std::queue<std::string> &q, std::unordered_set<std::string> &deadEndVisited, std::string &ele) const;


    int LOCK_SLOT_W = 4;


};


#endif
