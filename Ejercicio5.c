#include<stdio.h>
int main(void){
	printf("Éste algortimo leerá una matiz de NXM y calculara la matriz transpuesta\n");
	printf("*****************************************************************************************\n");
	printf("Definición: Una matriz es un conjunto ordenado en una estructura de filas y columnas.\n");
	printf("*****************************************************************************************\n");
	int a,b,c,d;	
	printf("introduzca el número Natural de filas de las matrices\n");
	scanf("%d",&a);
	printf("*****************************************************************************************\n");
	printf("Introduzca el número Natural de columnas de la matrices\n");
	scanf("%d",&b);
	printf("*****************************************************************************************\n");
	int A[a][b]; /*Definimos el tipo de dato, el nombre de la matriz, y numero de filas y columnas*/
	if(a<1||b<1){ /*agregamos el if por si el usuario quiere meter valores negativos a la cantidad de filas & columnas*/
		printf("error ese no es un numero natural\n");
	}
	else{
	printf("Procede a llenar los valores de la matriz\n"); /*vamos a meter un for anidado ya que uno representa las filas y las columnas*/
		for(c=0;c<a;c=c+1){/*Es importante mencionar que esto va a ocurrir hasta llenar el numero de filas deseado*/
				for(d=0;d<b;d=d+1){/*Es importante mencionar que esto va a ocurrir hasta llenar el numero de columna deseado*/
					printf("introduzca el valor para la fila %d columna %d \n",c+1,d+1);/*al valor de c y d se le suma 1 para que pida la coodernada (1,1), o sea el primer valor*/
					scanf("%d",&A[c][d]);  /*Entonces lee la primer matriz y guarda ese valor*/
				}
		}
	printf("--------------------MATRIZ 1----------------------\n");		
		for(c=0;c<a;c=c+1){ /*procedemos a imprimir la matriz dada para que el usuario pueda ver lo que esta pasando*/
			for(d=0;d<b;d=d+1){/*De la misma manera si al querer imprimir el valor de la matriz 1 se debe hacer con el for anidado ya que de no ser asi no se puede imprir dichos valores*/
				printf("%d\t",A[c][d]);/*metemos un slash t para que los valores aparescan con cierta medida de distancia*/
			}
	printf("\n");
		}

    printf("--------------------MATRIZ TRASNPUESTA----------------------\n");
		for(d=0;d<b;d=d+1){/*finalmente asi como se imprimieron las matrices anteriormente, al imprimir la M.T  se debe escribir los for y despues sumar dichos datos con el signo operador "más", solo que para que el valor sea transpuesto el for de filas debe ir debajo del de columnas*/
			for(c=0;c<a;c=c+1){
				printf("%d\t",A[c][d]);
			}
	printf("\n");
		}
	}
return 0;
}
