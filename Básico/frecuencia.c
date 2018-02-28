//Frecuencia
#include <stdio.h>
#include <stdlib.h>

int main (){

    int a=0,e=0,i=0,o=0,u=0,consonante=0,j;
    char arr[200], res;
    res == 's';
do{
	printf("Escribe la oracion\n");
	scanf("%[^\n]",&arr);

    for(j=0; j<sizeof(arr);j++)
    {
        if(arr[j]=='a' || arr[j]=='A')
            a++;
        else 
			 if(arr[j]=='e' || arr[j]=='E')
			    e++;
        else 
			 if(arr[j]=='i' || arr[j]=='I')
                i++;
        else 
			 if(arr[j]=='o' || arr[j]=='O')
                o++;
        else 
			 if(arr[j]=='u' || arr[j]=='U')
                u++;
        else 
            consonante++;
    }

    printf("a:%d e:%d i:%d o:%d u:%d",a,e,i,o,u);
    fflush(stdin);
    gets(arr);
	printf("\n Desea repetir el proceso...");
	scanf("%s",&res);
	
}while(res == 's');

    return 0;
}
