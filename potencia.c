#include<stdio.h>

int main(){
    int p=1, n=0;
    while (n<=0){
        printf("Dime el número de elementos de tu conjunto: ");
        scanf("%d",&n);
    }
    
    for(int i=0; i<n; i++){
        p=p*2;
    }

    printf("El valor de la potencia: %d\n",p);

    int binarios[p][n];
    char conj[p][n];
    int numBin[n];

    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            binarios[i][j]=0;
        }
    }

    for(int i=p-1; i>0;i--){
        for(int j=0;j<n;j++){
            numBin[j]=0;
        }
        //se calcula el binario para cada numero
        int coc = 1;
        int num=i;
        int k=0;
        int res=0;
        while (coc != 0){
            coc=num/2;
            res=num%2;
            numBin[k]=res;
            num=coc;
            k=k+1;
        }
        k=k-1;
        int m=n-1;
        //Se coloca la combinacion del binario en la matriz binaria
        while(k>=0){
            binarios[i][m]=numBin[k];
            k=k-1;
            m=m-1;
        }
        
    }

    for(int i=0;i<p;i++){
        for(int j=0;j<n;j++){
            if(binarios[i][j]==1){
                //binarios[j][i]
                printf("%c",j+97);
            }
        }
        printf("\n");
    }


    

    return 0;
}
