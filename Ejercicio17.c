#include <stdio.h>
int main (){
	int n,N,i;
	int j = 0;
	int b[100];
	int c[100];
	int base;
	printf("Escribe el numero que deseas encriptar\n");
	scanf("%d",&n);
	printf("Escribe el numero base para que encripte tu número Decimal\n");
		scanf("%d",&base);
	if ((n<0)||(base<1)){
		printf("Error, no puedo clacular lo que me pides\n");
	}
	else{
		/*Primero "relleno" b[] de 2 para luego saber cual es el numero pasado a     binario, 
		q sera el array hasta q aparezca un 2*/
		for(i=0;i<100;i++){
			b[i]=base;
			c[i]=base;
		}
		N=n;
		/*Aqui calculo el residuo*/
		for(i=0;n!=0;i++){
			b[i] = n%base;
			n = n/base;
		}
		for(i=0;i<100;i++){
			if (b[i]!=base){
				j = j+1;
			}
		}
		/*Como el numero sale al reves, lo almaceno en c[] al reves*/
		for(i=j-1;i>=0;i--){
			c[j-1-i]=b[i];
		}
		/*Muestro el numero encriptado por pantalla*/
		printf("El numero %i encriptado  es:",N);
		for(i=0;i<j;i++){
			printf("%i",c[i]);
		}
		printf("\n");
	}
return 2019;
}
