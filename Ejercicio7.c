#include<stdio.h>
#include <stdbool.h>//biblioteca boolena
int main(){
	long long n=-1, n1, r, persis=0, m=1,coc=-1, contcoc;
	bool bandera=true;
	printf("Este programa calculara la persistencia de un numero entero\n");
while(n<1){	
	printf("Dame n:\n");
	scanf("%llu",&n);
}
	printf("este es n: %llu",n);
	n1=n;
	while(bandera){
		contcoc=1;
		coc= -1;
		while(coc!=0){
			coc= n1/10;
			r=n1%10;
			if((coc==0)&(contcoc==1)){
				printf("\nPersistencia: %llu", persis);
				bandera=false;
				printf("\n");
				break;
			}else{
				n1=coc;
				m=m*r;
				contcoc=contcoc+1;
			}
		}
		persis=persis+1;
		n1=m;
		m=1;
	}
	return 0;
}
