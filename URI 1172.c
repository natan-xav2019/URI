#include <stdio.h>
/*URI Online Judge | 1172*/
main() {
	const int MAX = 10;
	int i,x[MAX];
	
	for(i=0;i<MAX;i++) {
		scanf("%i",&x[i]);
		if(x[i] <= 0)
			x[i] = 1;
	}
	
	for(i=0;i<MAX;i++)
		printf("X[%i] = %i\n",i,x[i]);
	
}
