#include <stdio.h>
/*URI Online Judge | 1174*/
main() {
	const int MAX = 100;
	int i;
	float A[MAX];
	
	for(i=0;i<MAX;i++)
		scanf("%f",&A[i]);
	
	for(i=0;i<MAX;i++)
		if(A[i] <= 10)
			printf("A[%i] = %.1f\n",i,A[i]);
	
}
