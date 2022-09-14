#include<stdio.h>
#include<stdlib.h>

int add(int a , int b );


int main(){
	printf("------------------Challenge 1-----------------------\n");
	int a , b ;
	printf("Donnez deux nombres svp :\n");
	scanf("%d %d",&a,&b);
	printf(" la somme de %d + %d est : %d ",a , b , add(a,b) );
	return 0;
}


int add(int a , int b ){
	return a + b ;
}
