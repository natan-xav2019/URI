#include <stdio.h>
#include <math.h>
/*https://www.urionlinejudge.com.br/judge/pt/problems/view/1022*/
int main() {
  int N,N1,N2,D1,D2,max,cont[2];
  int numerador,numeradorAlt, denominador,denominadorAlt;
  char operador;

  do{
    scanf("%d",&N);
  }while( !(N>=0 && N<=pow(10,4)) );

  for(cont[0]=1;cont[0]<=N;cont[0]++) {
    do
      scanf ("%d / %d  %c  %d / %d",&N1,&D1,&operador,&N2,&D2);
    while( !(N1>=0 && N1<=pow(10,3)) || !(D1>=0 && D1<=pow(10,3)) || !(N2>=0 && N2<=pow(10,3)) || !(D2>=0 && D2<=pow(10,3)) || !(operador == '+' || operador == '-' || operador == '*' || operador == '/')  );
    
    if(operador == '+') {//Soma
      numerador = (N1*D2 + N2*D1);
      denominador = (D1*D2);
    }
    else
      if(operador == '-') {//Subtração
        numerador = (N1*D2 - N2*D1);
        denominador = (D1*D2);
      }
      else
        if(operador == '*') {//Multiplicação
          numerador = (N1*N2);
          denominador = (D1*D2);
        }
        else
          if(operador == '/') {//Divisão
            numerador = (N1*D2);
            denominador = (N2*D1);
          }

    if(numerador<denominador)
      max=abs(numerador);
    else
      max=abs(denominador);

    numeradorAlt=numerador;
    denominadorAlt=denominador;

    for(cont[1]=2;cont[1]<=max;cont[1]++){//Simplificação
      if(numeradorAlt % cont[1] == 0 && denominadorAlt % cont[1] == 0) {
        numeradorAlt/=cont[1];
        denominadorAlt/=cont[1];
        cont[1]=2;
      }
    }
    printf("%d/%d = %d/%d\n", numerador , denominador , numeradorAlt,denominadorAlt );
  }
  return 0;
}
