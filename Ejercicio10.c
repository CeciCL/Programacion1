#include<stdio.h>
int main(){
	int n=-1;
	int i;
	printf("hey what´s up?\n");
	while(n<1){
		printf("give me 1 number positive and me i´l say if is perfecf or no \n");
		scanf("%d",&n);
	}
	int fin=n/2;
	int suma=0;
	for(i=1;i<=fin;i++){
		if(n%i==0){
			suma=suma+i;
		}
	}
	if(suma==n){
		printf("El numero que me diste %d es perfectirigillo\n",n);
	}
	else{
		printf("El numero que me diste %d no es perfectitigillo\n",n);
	}
return 2025;
}









