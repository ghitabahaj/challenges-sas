#include<stdio.h>
#include<stdlib.h>
//#include<stdbool.h>

typedef int bool;
#define true 1
#define false 0

bool isPremier(int x);
int  dividedby(int a , int b);


int main(){
	int n , m;
	printf("------------------Challenge 4-----------------------\n");
	here:
	printf("donnez le premier nombre (un nombre PREMIER):");
	scanf("%d",&n);
	if(isPremier(n)== false){
		  goto here;
	}
	there:
	printf("\ndonnez le deuxieme nombre (positif):");
	scanf("%d",&m);
	if(m<=0){
		goto there;
	}
	printf("le resultat du division de %d sur %d est %d \n ",n,m,dividedby(n,m));
	
	if (isPremier(dividedby(n,m))==true){
		printf ("%d est premier!!",dividedby(n,m));
	}else{
	    printf ("%d est non premier!!",dividedby(n,m));
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


int dividedby(int a , int b){
	return a/b;
	
}
