//Tangamandapio
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int real(char num){
	switch(num){
		case 37: 
			return 0;
		break;

		case 41:
			return 1;
		break;

		case 126:  
			return 2;
		break; 

		case 64: 
			return 3;
		break;

		case 63: 
			return 4; 
		break; 

		case 92:
			return 5; 
		break; 

		case 36:
			return -1;
		break;
	}
}

int main(){
	
	int i, sz = 0;

	char numt[100];
do {
	puts("Numero tangamandapiense\n");
	scanf("%[^\n]%*c", &numt);


	while (numt[sz] != '\0')
		sz += 1; 


	int nr[sz];

	for(i = 0; i < sz; i++)
		nr[i] = real(numt[i]);
	
	int potencias[sz];

	int potencia = 0;

	for(i = 0; i < sz; i++){
		potencias[i] = pow(6,i);
	}


	int suma = 0; 
	int j = sz - 1;

	for(i = 0; i < sz; i++){
		suma += potencias[i] * nr[j];
		j--;

	}


	printf("suma: %d\n", suma);
	
	

}while(numt != "#");

	return 0;
}

