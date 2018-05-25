#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstring>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main() {
	
	int limitA, limitB;

	while((cin >> limitA >> limitB) && (limitA != 0) && (limitB != 0)) {
		int valor = 0;

		for(int i = limitA; i <= limitB; i++) {
			int sqroot = sqrt(i);
			if(i == pow(sqroot, 2)) {
				valor++;
			}
		}

		cout << valor << endl;
	}
	
	return 0;
}