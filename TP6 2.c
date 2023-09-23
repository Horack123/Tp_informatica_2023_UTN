#include <stdio.h>
#include <math.h>
int fun (int a, int b, int c, float *x1, float *x2, float *d){
     *d=b*b-4*a*c;
 
 if (d>=0){
	 *x1=(-b+sqrt(*d))/(2*a);
	 *x2=(-b-sqrt(*d))/(2*a);
	 return 0;
 }
}
 int main(void){
	 float x,y,z;
	 float x1,x2,d;
	 printf( "\n   Introduzca el coeficiente a: " );
	 scanf( "%f", &x );
	 printf( "\n   Introduzca el coeficiente b: " );
	 scanf( "%f", &y );
	 printf( "\n   Introduzca el coeficiente c: " );
	 scanf( "%f", &z );
	 
	 fun(x,y,z,&x1,&x2,&d);
	 printf ("x1= %f \n", x1);
	 printf ("x2= %f \n", x2);
	 return 0;
 }