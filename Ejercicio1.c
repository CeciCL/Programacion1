#include<stdio.h>
int main(void){
	int a,c;
	printf("Este algoritmo te calculara la suma de los primeros múltiplos de un número entero.\n");
	printf("Introduce un número entero\n");
	scanf("%d",&a);
	int b=-1;
	while(b<0){
		printf("Introduce un número Natural es cual será el número de múltiplos a sumar\n");
		scanf("%d",&b);
	}
	for(c=0;b>=0;b=b-1){
		c=c+b*a;
	}
	printf("La suma es %d\n",c);
	
return 0;
} 
		
