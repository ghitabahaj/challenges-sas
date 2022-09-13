#include<stdio.h>
#include<stdlib.h>


int main(){
	
	int suite[100] = { 0 , 1}; 

	 int n= 0;
	printf("entrez le nombre :");
	scanf("%d",&n);
	
	for(int i=0 ;i<n;i++){
		
		suite[i+2]= suite[i+1]+suite[i];
		
		
	}
	
	printf("le resultat est : %d", suite[n]  );
	
	
	return 0;
}
Footer
© 2022 GitHub, Inc.
Footer navigation
Terms
Privacy

