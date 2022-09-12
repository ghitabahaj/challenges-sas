#include<stdio.h>
#include<stdlib.h>



int main(){
	
	int n , i , res;
	printf("entrez un nombre svp:");
	scanf("%d",&n);
	
	
	for(i=1;i<11;i++){
		res = i*n;
		printf("%d * %d = %d\n", n , i , res);
	}
	
	
	
	
	
	
	
	return 0;
}
