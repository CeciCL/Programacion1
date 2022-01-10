#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
	int o=-1;
	int a,b,c;
	printf("Este algoritmo determina los números palíndromos menores que existen en un numero N \n");
	while(o<0){
	printf("Dame un numero\n");
	scanf("%d",&o);
	}
for (int i=0;i<o;i++){
	a=i;
	b=0;
	c=0;
		while(a!=0){
			b=a%10;
			a=a/10;
			c=c*10+b;
		}
		if(c==i){
			printf("el num: %d es capicua",i);
			printf("\n");
		}
		/*else{
			printf("el num %d no es capicua",i);
		}*/
}
return 0;
}
