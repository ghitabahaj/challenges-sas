#include<stdio.h>
#include<stdlib.h>

//void  echanger(int a , int b );

void echanger(int a , int b){
	int tmp = 0;
	tmp=a;
	a=b;
	b=tmp;
//	printf(" a = %d",a);
//	printf(" b = %d",b);
	
}


int main(){
	printf("-------------------------Challenge 2---------------------------\n");
	int a , b ;
	printf("Donnez deux nombres svp :\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("\n------------------Avant la permutation-----------------------\n");
	printf(" a = %d",a);
	printf(" b = %d",b);
	printf("\n------------------Apres la permutation-----------------------\n");
	echanger(a,b);
	printf(" a = %d",a);
	printf(" b = %d",b);
	
	return 0;
}

//void echanger(int a , int b){
//	int tmp = 0;
//	tmp=a;
//	a=b;
//	b=tmp;
//	printf(" a = %d",a);
//	printf(" b = %d",b);
//	
//}




