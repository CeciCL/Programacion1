#include<stdio.h>
int main(void){
	int f1=-1,c1=-1;
	printf("Este algoritmo calculara el producto de dos matrices de NxM y de NxK\n");
	while((f1<1)||(c1<1)){
		printf("introduzca el número Natural de filas de la matriz 1\n");
		scanf("%d",&f1);
		printf("Introduzca el número Natural de columnas de la matriz 1\n");
		scanf("%d",&c1);
	}
	printf("*************************************************************\n");
	int f2=-1,c2=-1;
	while((f2<1)||(c2<1)){
		printf("introduzca el número Natural de filas de las matriz 2\n");
		scanf("%d",&f2);
		printf("Introduzca el número Natural de columnas de la matriz 2\n");
		scanf("%d",&c2);
	}
	if(c1==f2){
		printf("Procede a llenar los valores de la primera matriz\n");
		int A[f1][c1];
		int B[f2][c2];
		for(int i=0;i<f1;i++){
			for(int j=0;j<c1;j++){
				printf("introduzca el valor para la fila %d columna %d \n",i+1,j+1);
					scanf("%d",&A[i][j]);
	 		}
		}
		printf("*************************************************************\n");
		printf("Procede a llenar los valores de la segunda matriz\n");
		for(int i=0;i<f2;i++){
			for(int j=0;j<c2;j++){
				printf("introduzca el valor para la fila %d columna %d \n",i+1,j+1);
					scanf("%d",&B[i][j]);
	 		}
		}
		printf("***********************Esta es tu matriz 1**************************************\n");
		for(int i=0;i<f1;i++){
			for(int j=0;j<c1;j++){
				printf("%d\t",A[i][j]);
	 		}
		printf("\n");
		}
		printf("*******************Esta es tu matriz 2*************************\n");
		for(int i=0;i<f2;i++){
			for(int j=0;j<c2;j++){
				printf("%d\t",B[i][j]);
	 		}
		printf("\n");
		}
		printf("\n");
		printf("***********************MATRIZ AXB***********************\n");
		for(int i=0;i<f1;i++){
			for(int j=0;j<c2;j++){		
				int suma=0;
				for(int k=0;k<f2;k++){
					suma=suma+A[i][k]*B[k][j];
				}
				printf("%d\t",suma);
	 		}
		printf("\n");
		}	
	}
	else{
		printf("Error, tu matriz no puede ser calculada\n");
	}
return 0;
}


