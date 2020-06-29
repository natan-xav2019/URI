#include <stdio.h>
/*URI Online Judge | 1173*/
main() {
	const int MAX = 10;
	int i,N[MAX];
	
	do
		scanf("%i",&N[0]);
	while(N[0]>50);	
	
	for(i=1;i<MAX;i++) {
		N[i]=N[i-1]*2;
	}
	
	for(i=0;i<MAX;i++)
		printf("N[%i] = %i\n",i,N[i]);
	
}
