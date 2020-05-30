//
// Created by aisheng on 2020/4/20.
//

#include <iostream>
#include "IsValid.h"
#include <sys/time.h>

using namespace std;

static unsigned long get_current_time() {
    struct timeval tv{};

    gettimeofday(&tv, nullptr);

    return (tv.tv_sec * 1000000 + tv.tv_usec);
}

int main() {

    string s = "{[]}";
    IsValid objIsValid;

    if(objIsValid.isValid(s))
        cout << "Valid";
    else
        cout << "InValid";

    return 0;

}