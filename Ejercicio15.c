#include<stdio.h>
#include<math.h>
int main(){
int n=2;
printf("Este algortimo calculá que punto está más cercano de punto 'Q' con respecto a otros\n");
printf("De modo que necesito que me des al menos 3 parejas ordenadas para poder evaluar\n");
while(n<3){
	printf("Dame el numero de puntos que desees\n");
	scanf("%d",&n);
}
int A[n][2];
printf("procede a llenar lo valores de los puntos en parejas ordenadas\n");
//for (int c=0;c<n;c++){
	//for(int d=0;d<n;d++){
		//printf("introduce el valor para la coordenada X%d y la coordenada y%d\n", c+1,d+1);
		//scanf("%d",&A[c][d]);
	//}
//}
for(int i=0;i<n;i++){
	printf("introduzca el valor para X%d \n",i+1);
	scanf("%d",&A[i][0]); 
	printf("introduzca el valor para Y%d \n",i+1);
	scanf("%d",&A[i][1]); 
     printf("*****************\n");
}
printf("Estas son tus parejas ordenadas, la primer pareja ordenada representa el punto Q\n");
for(int i=0;i<n;i++){
	printf("(%d,%d)",A[i][0],A[i][1]); 
}
printf("\n");
int i;
int x=A[i][0];
int y=A[i][1];
int m=999999999;
int pos=i;
for(int i=1;i<n;i++){
	int x2=A[i][0];
	int y2=A[i][1];
	int d=sqrt((x2-x)*(x2-x)+(y2-y)*(y2-y));
	if(d<m){
		int m=d;
	}
}
printf("punto mas cercano es  (%d,%d)",A[pos][0],A[pos][1]);
return 0;
}

