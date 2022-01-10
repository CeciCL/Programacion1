#include<stdio.h>	
int main(void){
	int a=-1;
    printf("Este algoritmo te dará el factorial de un número\n");
	while(a<0){ 
	printf("Ingresa un número entero postivo\n");
 	 scanf("%d", &a);
	}
	long long fact=1;
	int b=a;
  for (b;b>1;b--){
    fact = fact * b;
}
  	printf("El factorial de %d = %llu \n", a, fact);
	return 0;
}


