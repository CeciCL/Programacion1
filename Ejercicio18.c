#include<stdio.h>
int main(void){	
	printf("Este algortimo leera una matriz y calculara los valores máximo y minimo, además dara sus respectivas pocisiones.\n");
	printf("Definición: Una matriz es un conjunto ordenado en una estructura de filas y columnas donde sus elementos son NÚMEROS ENTEROS.\n");
	int i,j,x,y,e,a,s,t;	
	printf("introduzca el número Natural de filas de las matriz\n");
	scanf("%d",&x);
	printf("Introduzca el número Natural de columnas de la matriz\n");
	scanf("%d",&y);
	int A[x][y];
	if(x<1||y<1){
		printf("Te dije NÚMERO NATURAL\n");
	}
	else{
		printf("Procede a llenar los valores de la matriz\n");
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				printf("introduzca el valor para la fila %d columna %d\n",i+1,j+1);
				scanf("%d",&A[i][j]);
				}
			}
		printf("Esta es la matriz que tú me diste\n");		
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				printf("%d\t",A[i][j]);
			}
		printf("\n");
		}
		e=A[0][0];
		s=0;
		t=0;
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				a=A[i][j];
				if(a>=e){
					e=a;
					s=i+1;
					t=j+1;
				}
			}
		}
		printf("Ahora procedere a darte el valor máximo:\n");		
		printf("%d es el valor maximo y esta en la pocisión:\n",e);
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				a=A[i][j];
				if(a==e){
					printf("[%d][%d]\n",i+1,j+1);
				}
			}
		}		
		e=A[0][0];
		s=0;
		t=0;
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				a=A[i][j];
				if(a<=e){
					e=a;
					s=i+1;
					t=j+1;
				}
			}
		}
		printf("Ahora procedere a darte el valor minimo:\n");		
		printf("%d es el valor minimo y esta en la pocisión:\n",e);
		for(i=0;i<x;i++){
			for(j=0;j<y;j++){
				a=A[i][j];
				if(a==e){
					printf("[%d][%d]\n",i+1,j+1);
				}
			}
		}	
		printf("\nAviso:Este programa es público, ajeno a cualquier partido político y queda prohibido su uso para fines distintos a los establecidos en el programa. YEA.\n .\n");
	}
return 0;
}
