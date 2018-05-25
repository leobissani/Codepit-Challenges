#include <stdio.h>
#include <math.h>

int main()
{
	long long soldierA, soldierB, diference;

	while ((scanf("%lli", &soldierA) == 1) && (scanf("%lli", &soldierB) == 1))
	{
	    if((soldierA > pow(2,32)) || (soldierB > pow(2,32))) break;
	    if(soldierA > soldierB) diference = soldierA - soldierB;
		if(soldierB > soldierA) diference = soldierB - soldierA;
		if(soldierA == soldierB) diference = 0;
		printf("%lli\n", diference);
	}	
		
	return 0;
}