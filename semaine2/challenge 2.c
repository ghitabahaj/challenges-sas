#include<stdio.h>
#include<stdlib.h>



int main(){
	
int i , j , n;


printf("entrez un nombre :");
scanf("%d",&n);

for(j=n;j>0;j--){
	
       for (i=j;i<=n;i++){

	printf("*");

        }
	printf("\n");
}
	
	
	return 0;
}
