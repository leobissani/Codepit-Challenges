#include <stdio.h>

int main()
{
    int maior = 0, i = 0, j = 0;
	int vetor[3];
  
  	for(j=0; j<3; j++){
      scanf("%d", &vetor[j]);
    }
  
    maior = vetor[0];

    for(i=0; i<3; i++){
        if(vetor[i] >= maior) maior = vetor[i];
    }

    printf("%i eh o maior\n", maior);

    return 0;
}