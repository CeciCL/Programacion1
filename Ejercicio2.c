#include<stdio.h>
	int main (){
		int cont=0,inicio=2;
		int n=-1;
	    int bin;
		while(n<=0){
			printf("--------------Este algoritmo te imprime N cantidad de numeros primos-----------\n");
			printf("dame un numero positivo el cual sera el numero de primos que imprimiré\n");	
			scanf("%d",&n);
		}
	    printf("********aquí estan tus números*********\n");
		while(cont<n){
			bin=1;
				int i=inicio-1;
				for(i; i>1;i=i-1){
					if((inicio%i)==0){
						bin=0;	
					}	
				}
			if(bin==1){
				printf("%d\n",inicio);
				cont=cont+1;
			}
			inicio=inicio+1;
		}
return 0;
}

