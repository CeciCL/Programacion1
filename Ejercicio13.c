#include <stdio.h>
int main() {
	int numero=-1;
	while(numero<=0){
		 printf("Dame un entero positivo:");
		 scanf("%d", &numero);
	}
	printf("%d=",numero);
	int divisor=2; //usamos el 2 por que es el primer primo
	while(numero>=divisor){            
          while (numero%divisor==0) {
              printf("(%d)",divisor);   
              numero =numero/divisor;    	
			}
		divisor ++;
     }
	return 2019;  
}


