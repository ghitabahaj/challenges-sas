#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
    int a=0;
    int b=0;
    int tmp=0;
    
    printf("entrez le nombre a svp:");
    scanf("%d",&a);
    printf("entrez le nombre b svp:");
    scanf("%d",&b);
    
    printf("\n---------------------En cours du permutation-----------------------\n");
    printf("\n-----------------------------Resultat------------------------------\n");
    
    
    if(a!=b || a>b ){
    	tmp=a;
    	a=b;
    	b=tmp;
    	printf (" a\t=\t %d",a);
    	printf (" b\t=\t %d",b);
	}else{
		printf("on peut permuter a et b si seulement si les valeurs ne sont pas identiques\n ou bien a est superieure strictement a la deuxieme valeur b ");
	}
	 
	
	
	return 0;
}
