#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main ()
{
int somme=0 , max = 0 , n;
	
	
  for(int i=1;i<10;i++){
  	printf ("entrez un nombre :");
	scanf("%d",&n);
	printf("\n");
  	if(n%10==0 && n<100){
  		somme = somme + n;
  		if(max < n){
  	max = n;
  }
  } 
  }
  
  printf(" la somme de ces nombres est : %d \n", somme);
  printf("le max de ces nombres est : %d", max);
  

return 0;
}
