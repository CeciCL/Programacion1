#include<stdio.h>
int main(void){
	printf("Este algortimo calculara un triangulo es Equilatero, escalaneo o isosceles conociendo la longitud de sus lados\n");
	printf("introduzca el valor del lado a del triángulo\n");
	float a,b,c;
	scanf("%f",&a);
	printf("introduzca el valor del lado b del triángulo\n");
	scanf("%f",&b);
	printf("introduzca el valor del lado c del triángulo\n");
	scanf("%f",&c);
	if((a>0)&&(b>0)&&(c>0)){
		if(((a+b)<=c) ||(a+c<=b)||(c+b<=a)){
			printf("tu triangulo no existe\n");
		}
		else{		
			if((a==b)&&(b==c)&&(c==a)){
			printf("Tú triangulo es equilatero.\n");
			}
			else {
				if((a!=b)&&(b!=c)&&(c!=a)){
					printf("tú triangulo es escaleno,\n");
				}
				else{
					printf("tu triangulo es isosceles.\n");
				}
			}
		}
	}
	else{
		printf("introduce valores enteros positivos\n");
	}	
return 0;
}
	
