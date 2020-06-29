#include <stdio.h>
/*URI Online Judge | 1175*/
void invert(int vetor[], int max){
	int i,aux;
	for(i=0;i<max/2;i++) {
		aux=vetor[i];
		vetor[i]=vetor[max-1-i];
		vetor[max-1-i]=aux;
	}
}

main() {
	const int MAX = 20;
	int i,N[MAX];
	
	for(i=0;i<MAX;i++)
		scanf("%i",&N[i]);
	
	invert(N,MAX);
	for(i=0;i<MAX;i++)
		printf("N[%i] = %i\n",i,N[i]);
	
}
