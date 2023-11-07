#include <stdio.h>
#include <stdlib.h>

int main(){

int vetor[7], n, i, valor;

for(i=0;i<7; i++){

printf("Escolha um numero para um vetor:%d\n", i);
	scanf("%d", &vetor[i]);
}

for(i=0;i<7;i++){

	for(n=i +1; n<7; n++){
	
	if(vetor[i] > vetor[n]){
	
	int valor;
	valor = vetor[n];
	vetor[n] = vetor[i];
	vetor[i] = valor;
	
	
	
	}
	
	
	}
	printf("Valores em Ordem Crescente:\n%d\n", vetor[i]);
}




}

