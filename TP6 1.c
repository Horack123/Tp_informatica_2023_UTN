#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int convertir1 (float a1,float b1,float *modulo1,float *direccion1) {
	float mult = 180.0/PI;
	float total=atan(b1/a1)* mult;
	*modulo1= sqrt((a1*a1)+(b1*b1));
	*direccion1= total;
	return 0;
}
int convertir2(float *a2,float *b2,float tita,float r){
	*a2= r*cos(tita);
	*b2= r*sin(tita);
	return 0;
}
int main (void){
	float a1,b1,modulo1,direccion1,a2,b2,tita,r;
	int num;
	printf("\n elija 1 para pasar de rectangular a polar o elija 2 para pasar de polar a rectangular: ");
	printf("");
	scanf("%d",&num);
		
	if(num==1){
	printf("\n valor de a: ");
	scanf("%f",&a1);
	printf("\n valor de b: ");
	scanf("%f",&b1);
	convertir1(a1,b1,&modulo1,&direccion1);
	printf("\n %f",modulo1);
	printf("\n %f",direccion1);
	}
	if (num==2){
	printf("\n valor de r: ");
	scanf("%f",&r);
	printf("\n valor de tita: ");
	scanf("%f",&tita);
	convertir2(&a2,&b2,r,tita);
	printf("\n %f",a2);
	printf("\n %f",b2);
	}
}
