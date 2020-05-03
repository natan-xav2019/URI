#include <stdio.h>

/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1165*/
int main() {
	int cont, num, quatDivisor, quant, i;
	
	scanf("%i",&quant);
	
	for(i=0;i<quant;i++) {
		scanf("%i",&num);
		quatDivisor=0;
		for(cont=1;cont<=num;cont++) {
			if(num % cont == 0) {
				quatDivisor++;
			}
		}
		
		if(quatDivisor == 2)
			printf("%i eh primo\n",num);
		else
			printf("%i nao eh primo\n",num);
	}
	
	return 0;
}
