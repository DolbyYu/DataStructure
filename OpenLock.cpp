//
// Created by aisheng on 2020/5/13.
//

#include "OpenLock.h"
#include <cstring>
#include <iostream>
#include <algorithm>

using namespace std;

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

void OpenLock::pushNeigh(queue<string> &q, unordered_set<string> &deadEndVisited, string &ele) const {

    const char *ch = ele.c_str();
    char newNeigh[5];
    string newEle;

    for (int i = 0; i < 4; ++i) {
        memccpy(newNeigh, ch, '\0',  5);
        int intBit = newNeigh[i] - '0';

        //up neighbor
        int upBit;
        upBit = intBit == 9 ? 0 : (intBit + 1);
        newNeigh[i] = '0' + upBit;
        newEle = newNeigh;
        if (deadEndVisited.find(newEle) == deadEndVisited.end()){
            q.push(newEle);
            deadEndVisited.insert(newEle);
        }

        //down neighbor
        int downBit;
        downBit = intBit == 0 ? 9 : (intBit - 1);
        newNeigh[i] = '0' + downBit;
        newEle = newNeigh;
        if (deadEndVisited.find(newEle) == deadEndVisited.end()){
            q.push(newEle);
            deadEndVisited.insert(newEle);
        }
    }

}

// 避免在 vector 中查找，速度过慢
int OpenLock::openLock(vector<string> &deadEnds, string &target) {

    string rootNode = "0000";

    unordered_set<string> deadEndVisited(deadEnds.begin(), deadEnds.end());
    queue<string> q;

    if (deadEndVisited.find(rootNode) !=deadEndVisited.end() || deadEndVisited.find(target) != deadEndVisited.end())
        return -1;
    else
        q.push(rootNode);

    int step = 0;
    while (!q.empty()) {
        int size = q.size();
        for (int i = 0; i < size; ++i) {
            string node = q.front();
            q.pop();
            deadEndVisited.insert(node);
            if (node == target)
                return step;
            else
                pushNeigh(q, deadEndVisited, node);
        }
        ++step;
    }

    return -1;
}

