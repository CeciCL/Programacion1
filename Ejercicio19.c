#include <stdio.h>
 
int main(){
	printf("Este algoritmo determinara el MCM y el MCD");
    int numero1, numero2, producto;
    int residuo, mcd, mcm;
	printf("Numero1: ");
	scanf("%d", &numero1);
 
    printf("Numero2: ");
    scanf("%d", &numero2);
 
    producto =numero1*numero2;
 
    do {
        residuo = numero1 % numero2;
 
        if (residuo != 0) {
            numero1 = numero2;
            numero2 = residuo;
 
        } else {
            mcd = numero2;
        }
 
    } while (residuo != 0);
 
    mcm = producto / mcd;
 
    printf("El mcm es: %d y el mcd es: %d\n", mcm, mcd); 
   return 0;
}
