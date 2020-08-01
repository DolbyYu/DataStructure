//
// Created by 余爱生 on 2020/7/28.
//

#ifndef DATASTRUCTURE_CANVISITALLROOMS_H
#define DATASTRUCTURE_CANVISITALLROOMS_H

#include <vector>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {

        int roomSize = rooms.size();
        int seen[roomSize];
        memset(seen,0, sizeof(int)*roomSize);

        visitedRooms = 1;
        seen[0] = 1;
        for (auto ele:rooms.at(0))
            s.push(ele);

        while(!s.empty()){
            int room = s.top();
            s.pop();

            if (seen[room] != 1){
                ++visitedRooms;
                seen[room] = 1;

                for (auto ele:rooms.at(room))
                    s.push(ele);
            }

        }

        return (visitedRooms == rooms.size());

    }

private:
    stack<int> s;
    int visitedRooms;

};

#endif //DATASTRUCTURE_CANVISITALLROOMS_H
