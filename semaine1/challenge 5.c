#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
    float a=0 ;
    float x0=0;
    float x1=0;
    float x2=0;
    float delta =0;
    float b=0;
    float c=0;
    
    printf("entrez la valeur de a:");
    scanf("%f",&a);
    printf("entrez la valeur de b:");
    scanf("%f",&b);
    printf("entrez la valeur de c:");
    scanf("%f",&c);
    
    printf("\n---------------------En cours de calculer-----------------------\n");
    printf("\n %.1fx^2 + (%f)x + %.1f = 0",a,b,c);
    printf("\n-----------------------------Resultat------------------------------\n");
  
	 delta = pow(b,2)-(4*a*c);
	 printf("vdelta = %.2f\n",delta);  
	 x0 =(-b)/(2*a);
	 x1= (-b - sqrt(delta))/( 2*a);
     x2= (-b + sqrt(delta))/( 2*a);
	 if(delta< 0){
	 	printf("l equation n'a pas de solution reelle!");
	 }else if(delta==0){
	 	printf("l equation a une solution unique : ");
	 	printf (" x0 = (-b)/(2*a) = %.1f",x0);
	 }else{
	 	printf("l equation a deux solutions distinctes : ");
	    printf (" x1 = (-b - vdelta)/(2*a) = %.1f \n",x1);
	    printf (" x2 = (-b + vdelta)/(2*a) = % .1f \n",x2);
	 	
	 }
	 
	
	
	return 0;
}
