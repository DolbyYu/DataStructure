//
// Created by aisheng on 2020/5/13.
//

#include "OpenLock.h"
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

bool OpenLock::eleInQueue(vector<string> &queue, string &ele) {

    auto iter = std::find(queue.begin(), queue.end(), ele);

    return iter != queue.end();

}

string OpenLock::int2String(int number, int lockSlotSize) {

    if (number < 0)
        return nullptr;

    char ch[lockSlotSize + 1];
    for (int i = 0; i < lockSlotSize; ++i) {
        ch[i] = '0';
    }
    ch[lockSlotSize] = '\0';

    for (int i = 1; number != 0 && i <= lockSlotSize; number = number / 10, ++i)
        ch[lockSlotSize - i] = '0' + number % 10;

    return ch;

}

void OpenLock::pushNeigh(vector<string> &queue, vector<string> &deadEnds, string &ele) const {

    const char *ch = ele.c_str();
    char newNeigh[LOCK_SLOT_W + 1];

    for (int i = 0; i < LOCK_SLOT_W; ++i) {
        memccpy(newNeigh, ch, '\0', LOCK_SLOT_W + 1);
        int intBit = newNeigh[i] - '0';

        //up neighbor
        int upBit;
        upBit = intBit == 9 ? 0 : (intBit + 1);
        newNeigh[i] = '0' + upBit;
        string newEle = newNeigh;
        if (!eleInQueue(deadEnds, newEle) && !eleInQueue(queue, newEle))
            queue.push_back(newEle);

        //down neighbor
        int downBit;
        downBit = intBit == 0 ? 9 : (intBit - 1);
        newNeigh[i] = '0' + downBit;
        newEle = newNeigh;
        if (!eleInQueue(deadEnds, newEle) && !eleInQueue(queue, newEle))
            queue.push_back(newEle);
    }

}

int OpenLock::openLock(vector<string> &deadEnds, string &target) {

    string rootNode = int2String(0, LOCK_SLOT_W);
    if (eleInQueue(deadEnds, rootNode) || eleInQueue(deadEnds, target))
        return -1;

    vector<string> queue;
    int step = 0;

    queue.push_back(rootNode);

    while (!queue.empty()) {
        int size = queue.size();
        for (int i = 0; i < size; ++i) {
//            std::cout << "queue.size()=" << queue.size() << std::endl;

            string node = queue.front();
            queue.erase(queue.begin());
            deadEnds.push_back(node);
            if (node == target)
                return step;
            else
                pushNeigh(queue, deadEnds, node);
        }
        ++step;
    }

    return -1;
}
