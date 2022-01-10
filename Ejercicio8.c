#include<stdio.h>
int main(void){
	printf("Este algoritmo te calculara los elementos de la sucesión de Fibonacci generalizada por ti ,además te mostrara el cociente entre los terminos de la succesión\n");
	long long i,j,k,r,f;
	long double l,p,q;
	printf("Introduce f1\n");
	scanf("%lld",&i);
	printf("Introduce f2\n");
	scanf("%lld",&j);
	printf("Introduce el número de elementos de la sucesión de Fibonacci Generalizada que quieres calcular\n");
	scanf("%lld",&k);
	if((i<0||j<0)||(i==0&&j==0)||(j<i)||(k<2)){
		printf("Error, verifique sus datos de entrada\n");
	}
	else{
		p=i;
		q=j;
		r=k;
		k=k-2;
		printf("Los elementos de la sucesion de Fibonacci generalizada son los siguientes:\n");
		printf("%lld\n",i);
		printf("%lld\n",j);
		for(f=0;0<k;k=k-1){
			f=i+j;
			printf("%lld\n",f);
			i=j;
			j=f;

		}
		printf("Ahora se dara el cociente entre los terminos enesimos entre los terminos enesimos menos uno\n");
		r=r-1;
		f=0;
		for(l=0;0<r;r=r-1){
			l=(q/p);
			printf("%.10Lf\n",l);
			f=p+q;			
			p=q;
			q=f;
		}
		printf("%.10Lf es aproximado a 1.618\n",l);
	}
return 0;}
		
	

