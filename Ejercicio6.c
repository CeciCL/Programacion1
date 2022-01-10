#include<stdio.h>
int main (){
	int n1, n2;
	int div1=0;
	int div2=0;

	printf("Este algotitmo determina si dos numeros son amigos o no lo son.\n");
	printf("Dame el número 1\n");
	scanf("%d",&n1);
	printf("Dame el número 2\n");
	scanf("%d",&n2);
	for (int i=1;i<=n1/2;i++){
		if (n1%i==0){
			div1=div1+i;
		}
	}
	for (int i=1;i<=n2/2;i++){
		if (n2%i==0){
			div2=div2+i;
		}
	}
	if ((n1==div2) && (n2==div1)){
		printf("%d y %d \n son amigos",n1,n2);
	}
	else{
	    printf("%d y %d \n no son amigos\n",n1,n2);
	}
return 0;		
}
