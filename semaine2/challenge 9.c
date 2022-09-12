#include<stdio.h.>
#include<stdlib.h>



int main(){
	
int n= 0 , p = 0 , res = 1;

printf("entrez un nombre svp:");
scanf("%d",&n);
printf("\n");
printf("entrez la puissance svp:");
scanf("%d",&p);
 
int d = p;

while(n>0 && p>0){
	
	    res = res * n ;
		p--;
	
}

printf(" %d a la puissance %d egal a : %d", n , d , res);





	
	
	return 0;
}
