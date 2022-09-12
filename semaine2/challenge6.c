#include<stdio.h>
#include<stdlib.h>



int main(){
 int p ,i , n=0 , div=0 ;
 
 printf ( "entrez un nombre n :");
 scanf("%d",&n);
 
 for (p=2;p<=n;p++){
 	for(i=1;i<=p;i++){
 	if (p%i==0) {
 		div++;
	 }
	 
	}
	
	 if(div==2){
	printf("%d est premier \n", p);
}else{
	printf(" %d n est premier \n  ", p);
}
	 
	 div = 0; 




 }
	
	
	
	
	return 0;
}
