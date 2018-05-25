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
	
	int i, casos, valorMedio, salarioA, salarioB, salarioC;

	cin >> casos;

	if(casos < 20) {

		int salarios[casos];

		for(i=0; i<casos; i++) {
			cin >> salarioA >> salarioB >> salarioC;
			if ((salarioA >= 1000 && salarioA <= 10000) && (salarioB >= 1000 && salarioB <= 10000) && (salarioC >= 1000 && salarioC <= 10000)) {
				if(salarioA > salarioB && salarioA > salarioC) {
					if(salarioB > salarioC) valorMedio = salarioB;
				else valorMedio = salarioC;
				}

				if(salarioB > salarioA && salarioB > salarioC) {
					if(salarioA > salarioC) valorMedio = salarioA;
					else valorMedio = salarioC;
				}

				if(salarioC > salarioB && salarioC > salarioA) {
					if(salarioA > salarioB) valorMedio = salarioA;
					else valorMedio = salarioB;
				}

				salarios[i] = valorMedio;
			}
		}

		for(i=0; i<casos; i++) {
			cout << "Case " << i+1 << ": " << salarios[i] << endl;
		}
	}

	return 0;
}