//Numeros perfectos
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int i, num1, n, e, c = 0;
	
	printf("Escriba el numero de veces se repetira el proceso\n");
	scanf("%d", &e);
	
 do{
 
 	printf("Introduzca el numero a evaluar y cuantos numeros se evaluaran ");
	scanf("%d%d", &num1, &n);
	
	for(i=1; i<num1; i++) {
		if( pow(2, i)*(pow(2, i+1)-1)==num1 ) {
			printf(" %d es perfecto.\n", num1);
			break;
		}
	}
		if(pow(2, i)*(pow(2, i+1)-1)!=num1) {
			printf(" %d NO es perfecto.\n", num1);
		}
		
	c++;	
 }while(c < e);	


	return 0;
}
