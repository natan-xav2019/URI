#include <stdio.h>
/*URI Online Judge | 1176*/
long long int Fibonacci(int repete) {
	int x = 0,y = 1,i, aux=0;
	
	for(i=0;i<repete;i++) {
		aux = x + y;
		x = y;
		y = aux;
	}
	
	return x;
}

main() {
	int T,N,i;
	
	scanf("%i",&T);
	
	for(i=0;i<T;i++) {
		do
			scanf("%i",&N);
		while(N>60 || N<0);
		
		printf("Fib(%i) = %lld\n",N,Fibonacci(N));
	}
	
}
