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
    int number, operation, x;

    while(cin >> number)  {
        bool itsAStack = true, itsAQueue = true, itsAPriorityQueue = true;
        queue<int> myQueue;
        stack<int> myStack;
        priority_queue<int> myPriorityQueue;

        for(int i = 0; i < number; i++) {
            cin >> operation >> x;

            switch(operation) {
                case 1:
                    if(itsAQueue) myQueue.push(x);
                    if(itsAStack) myStack.push(x);
                    if(itsAPriorityQueue) myPriorityQueue.push(x);
                    break;

                case 2:
                    if(itsAQueue) {
                        if(myQueue.empty() || myQueue.front() != x)
                            itsAQueue = false;
                        else
                            myQueue.pop();
                    }
                    if(itsAStack) {
                        if(myStack.empty() || myStack.top() != x)
                            itsAStack = false;
                        else
                            myStack.pop();
                    }
                    if(itsAPriorityQueue) {
                        if(myPriorityQueue.empty() || myPriorityQueue.top() != x)
                            itsAPriorityQueue = false;
                        else
                            myPriorityQueue.pop();
                    }
                    break;
            }
        }

        if(itsAQueue == true && itsAStack == false && itsAPriorityQueue == false) cout << "queue" << endl;
        else if(itsAQueue == false && itsAStack == true && itsAPriorityQueue == false) cout << "stack" << endl;
        else if(itsAQueue == false && itsAStack == false && itsAPriorityQueue == true) cout << "priority queue" << endl;
        else if(itsAQueue == false && itsAStack == false && itsAPriorityQueue == false) cout << "impossible" << endl;
        else cout << "not sure" << endl;
    }
}