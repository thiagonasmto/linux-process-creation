#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *fib;
	int num;
	int i;

	printf("\nDigite quantidade de termos para exibir na serie de Fibonacci: ");
	scanf("%d", &num);

	if (num <= 0) {
		printf("\nQuantidade de termos deve ser um numero positivo e nao-nulo!\n");
		return 1;
	}

	fib = (int *) calloc(num, sizeof(int));

	if(!fib){
		printf("\nSem espaco suficiente na memoria para armazenar os termos da Serie de Fibonacci!\n");
		return 1;
	}

	fib[0] = 0;
	fib[1] = 1;

	for(i=2; i<num; i++){
		fib[i] = fib[i-1] + fib[i-2];
	}

	printf("\n\t\t");
	for(i=0; i<num; i++){
		printf(" %d ", fib[i]);
	}
	printf("\n\n");

	free(fib);

	return 0;

}
