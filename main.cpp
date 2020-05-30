//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include <vector>
#include "DailyTemperatures.h"
#include <sys/time.h>

using namespace std;

static unsigned long get_current_time() {
    struct timeval tv{};

    gettimeofday(&tv, nullptr);

    return (tv.tv_sec * 1000000 + tv.tv_usec);
}

int main() {

    vector<int> T = {73, 74, 75, 71, 69, 72, 76, 73};
    //your output should be [1, 1, 4, 2, 1, 1, 0, 0]

    Solution solution;

    for (auto i : solution.dailyTemperatures2(T))
        cout << i << endl;

    return 0;

}