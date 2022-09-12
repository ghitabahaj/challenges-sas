#include <stdio.h>
#include <stdlib.h>
#include<math.h>



int main() {
    int nombre=0;
    
    printf("entrez un nombre svp:");
    scanf("%d",&nombre);
    printf("\n---------------------Pair ou impair-----------------------\n");
    
    
    if(nombre%2==0){
    	printf("\t\tle nombre %d est pair.\n",nombre);
	}else{
		printf("\t\tle nombre %d est impair.\n",nombre);
	}
	 
	
	
	return 0;
}
