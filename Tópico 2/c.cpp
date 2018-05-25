#include <cstdio>
#include <queue>
#include <functional>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <iostream>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
    int number;

    while ((cin >> number) && (number != 0)) {
        priority_queue<int, vector<int>, greater<int>> queue;

        while (number--) {
            int x;
            cin >> x;
            queue.push(x);
        }

        int total = 0, cost = 0;
        
        while (queue.size() > 1) {
            total = queue.top();
            queue.pop();
            total += queue.top();
            queue.pop();
            cost += total;
            queue.push(total);
        }

        cout << cost << endl;
    }

    return 0;
}