#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
    int a=0;
    int b=0;
    int somme=0;
    
    printf("entrez le nombre a svp:");
    scanf("%d",&a);
    printf("entrez le nombre b svp:");
    scanf("%d",&b);
    
    printf("\n---------------------En cours de calculer-----------------------\n");
    printf("\n-----------------------------Resultat------------------------------\n");
    somme = a+b;
    int triple = 3*somme;
    if(a!=b ){
    	
    	printf (" la somme de a et b est  %d + %d = %d",a,b,somme);
    	
	}else{
		
		printf("3 x (%d + %d) = %d",a,b,triple);
	}
	 
	
	
	return 0;
}
