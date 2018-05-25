#include <cstdio>
#include <queue>
#include <functional>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;

int main() {
    int numberOfFrosh;

    while (cin >> numberOfFrosh, numberOfFrosh) {
        map<string, int> log;
        int maxN = -1;
        string courses[5];

        for (int i = 0; i < numberOfFrosh; i++) {
            cin >> courses[0] >> courses[1] >> courses[2] >> courses[3] >> courses[4];
            sort(courses, courses + 5);
            string coursesCode;

            for (int j = 0; j < 5; j++) {
                coursesCode += courses[j];
            }

            if (!log.count(coursesCode)) {
                log[coursesCode] = 1;
                maxN = max(maxN, 1);
            } 
            else {
                int k = log[coursesCode] + 1;
                log[coursesCode] = k;
                maxN = max(maxN, k);
            }
        }

        int counter = 0;
        map<string, int>::iterator it;

        for (it = log.begin(); it != log.end(); it++) {
            if (it->second == maxN)
                counter += it->second;
        }

        printf("%d\n", counter);
    }

    return 0;
}