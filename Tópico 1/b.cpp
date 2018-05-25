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

int calculaNumeros(int n) {
	int c = 0, first = 0;

	while(n != 1) {
		if(first == 0) {
			c++;
			first = 1;
		}
		if(n % 2 == 1) {
			n = (n * 3) + 1;
			c++;
		}
		else {
			n = n / 2;
			c++;
		}
	}

	return c;
}

int main() {
	
	int i = 0, limitA, limitB, aux, flag = 0, valor = 0, maior = 0;

	while (cin >> limitA >> limitB) {
		if(limitA > limitB) {
			aux = limitB;
			limitB = limitA;
			limitA = aux;
			flag = 1;
		}

		if((limitA == 1) && (limitB == 1)) {
			maior = 1;
		}

		for(i=limitB; i>=limitA; i--) {
			valor = calculaNumeros(i);
			if(valor >= maior) maior = valor;
		}

		if(flag == 0) {
			cout << limitA << " " << limitB << " " << maior << endl;
			maior = 0;
			flag = 0;
		}
		if(flag == 1) {
			cout << limitB << " " << limitA << " " << maior << endl;
			maior = 0;
			flag = 0;
		}
		
	}	
	
	return 0;
}