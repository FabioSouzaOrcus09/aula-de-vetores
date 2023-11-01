#include <stdio.h>

int main(){
	int vetor[10];
	int i;

	for(i=0;i<=10;i++){
		printf("digite um numero para a posicao do vetor %d:", i);
			scanf("%d",&vetor[i]);


	}

	for(i=0;i<=10; i++){
		vetor[i]*=2;
	}

	printf("resultado da funcao:\n");
	for(i=0;i<=10;i++){
		printf("posicao %d: %d\n", i, vetor[i]);
	}

	return 0;



}
