#include<stdio.h>
int main(void){
	printf("Éste algortimo leerá dos matrices y calculará la matríz resultante de la suma de estas\n");
	printf("Definición: Una matriz es un conjunto ordenado en una estructura de filas y columnas.\n");
	int a,b,c,d;	
	printf("introduzca el número Natural de filas de las matrices\n");
	scanf("%d",&a);
	printf("Introduzca el número Natural de columnas de la matrices\n");
	scanf("%d",&b);
	int A[a][b],B[a][b],C[a][b]; /*Definimos el tipo de dato, el nombre de la matriz, y numero de filas y columnas*/
	if(a<1||b<1){ /*agregamos el if por si el usuario quiere meter valores negativos a la cantidad de filas & columnas*/
		printf("error ese no es un numero natural, puedes intentar con  la matriz fila de orden 1x1\n");
	}
	else{
	printf("Procede a llenar los valores de la primera matriz\n"); /*vamos a meter un for anidado ya que uno representa las filas y las columnas*/
		for(c=0;c<a;c=c+1){/*Es importante mencionar que esto va a ocurrir hasta llenar el numero de filas deseado*/
				for(d=0;d<b;d=d+1){/*Es importante mencionar que esto va a ocurrir hasta llenar el numero de columna deseado*/
					printf("introduzca el valor para la fila %d columna %d \n",c+1,d+1);/*al valor de c y d se le suma 1 para que pida la coodernada (1,1), o sea el primer valor*/
					scanf("%d",&A[c][d]);  /*Entonces lee la primer matriz y guarda ese valor*/
				}
		}
	printf("Procede a llenar los valores de la segunda matriz matriz\n");/*De forma analoga para la matriz numero 2*/
		for(c=0;c<a;c=c+1){
				for(d=0;d<b;d=d+1){
					printf("introduzca el valor para la fila %d columna %d \n",c+1,d+1);
					scanf("%d",&B[c][d]);
				}
		}
	printf("--------------------MATRIZ 1----------------------\n");		
		for(c=0;c<a;c=c+1){ /*procedemos a imprimir la matriz dada para que el usuario pueda ver lo que esta pasando*/
			for(d=0;d<b;d=d+1){/*De la misma manera si al querer imprimir el valor de la matriz 1 se debe hacer con el for anidado ya que de no ser asi no se puede imprir dichos valores*/
				printf("%d\t",A[c][d]);/*metemos un slash t para que los valores aparescan con cierta medida de distancia*/
			}
	printf("\n");
		}
	printf("--------------------MATRIZ 2----------------------\n");		
		for(c=0;c<a;c=c+1){/* todo ocurre de forma analoga*/
			for(d=0;d<b;d=d+1){
				printf("%d\t",B[c][d]);
			}
	printf("\n");
		}

    printf("-------------------- MATRIZ RESULTANTE----------------------\n");
		for(c=0;c<a;c=c+1){/*finalmente asi como se imprimieron las matrices anteriormente, al imprimir su suma  se debe escribir los for y despues sumar dichos datos con el signo operador "más"*/
			for(d=0;d<b;d=d+1){
				printf("%d\t",A[c][d]+B[c][d]);
			}
	printf("\n");
		}
	}
return 0;
}
