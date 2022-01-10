#include<stdio.h>
int main(){
int a=1;
int b=0;
while(a>b){
	printf("Dame el valor de a\n");
	scanf("%d",&a);
	printf("Dame el valor de b\n");
	scanf("%d",&b);
}
int n=-1;
while(n<0){
	printf("dame n\n");
	scanf("%d",&n);
}
float c=(float)b-(float)a;
float incr=c/(float)n;
printf("incr %f\n",incr);
float pi=a;
float A=0;
for (int i=0;i<n;i++){
	A=(incr)*(pi*pi)+A;
	pi=pi+incr;
}
printf("el area bajo la curva de la función X^2 es: %f",A);
return 2019;
}
