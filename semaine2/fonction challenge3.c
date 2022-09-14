#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

typedef int bool;
#define true 1
#define false 0

bool isPremier(int x);


int main(){
	printf("------------------Challenge 3-----------------------\n");
	int a ;
	printf("Donnez un nombre svp :\n");
	scanf("%d",&a);
	if(isPremier(a) == true ){
		printf("%d est premier!!!!",a);
	}else{
		printf("%d n est pas premier!!!!",a);
	}
	return 0;
}


bool isPremier(int x ){
	int div = 0;
	for (int i=1 ;i<=x;i++){
		if(x%i==0){
			div++;}	
	}
	if(div==2){
		return true ;
	}else{
		return false ;
	}
	
}
