#include <stdio.h>
#include <math.h>
void swap(int *a,int *b);
 int main(void){
	 int x1,x2;
	 printf( "\n   Ingrese x1: " );
	 scanf( "%d", &x1 );
	 printf( "\n   Ingrese x2: " );
	 scanf( "%d", &x2 );
	 swap(&x1,&x2);
	 printf("x1= %d   x2 = %d",x1,x2);
	return 0;
 }
	 void swap(int *a,int *b){
		 int temp=*b;
		 *b=*a;
		 *a=temp;
	 }
	 