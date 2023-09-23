#include <stdio.h>
#include <math.h>
float multi(float arr1 [][3], float arr2 [][3],float arr3[][3]){
	float pip;
	int d,i;
	arr3[0][0]=arr1[0][0]*arr2[3][0]+arr1[0][1]*arr2[4][0]+arr1[0][2]*arr2[5][0];
	arr3[0][1]=arr1[0][0]*arr2[3][1]+arr1[0][1]*arr2[4][1]+arr1[0][2]*arr2[5][1];
	arr3[0][2]=arr1[0][0]*arr2[3][2]+arr1[0][1]*arr2[4][2]+arr1[0][2]*arr2[5][2];
	arr3[1][0]=arr1[1][0]*arr2[3][0]+arr1[1][1]*arr2[4][0]+arr1[1][2]*arr2[5][0];
	arr3[1][1]=arr1[1][0]*arr2[3][1]+arr1[1][1]*arr2[4][1]+arr1[1][2]*arr2[5][1];
	arr3[1][2]=arr1[1][0]*arr2[3][2]+arr1[1][1]*arr2[4][2]+arr1[1][2]*arr2[5][2];
	arr3[2][0]=arr1[2][0]*arr2[3][0]+arr1[2][1]*arr2[4][0]+arr1[2][2]*arr2[5][0];
	arr3[2][1]=arr1[2][0]*arr2[3][1]+arr1[2][1]*arr2[4][1]+arr1[2][2]*arr2[5][1];
	arr3[2][2]=arr1[2][0]*arr2[3][2]+arr1[2][1]*arr2[4][2]+arr1[2][2]*arr2[5][2];
	for(d=0;d<3;d++){
	   for(i=0;i<3;i++){
	   printf("el resultado es %f \n",arr3[d][i]);
	   }
	}
	return pip;
}
	int main(void){
		float arreglo1[3][3];
		float arreglo2[3][3];
		float arreglo3[3][3];
		float multiplicacion;
		int k,j,f,l;
		for(k=0;k<3;k++){
			for(j=0;j<3;j++){
				printf("ingrese el elemento de la primera matriz %d %d \n",k+1,j+1);
				scanf("%f",&arreglo1[k][j]);
			}
		}
		for(f=0;f<3;f++){
			for(l=0;l<3;l++){
				printf("ingrese el elemento de la segunda matriz %d %d \n",f+1,l+1);
				scanf("%f",&arreglo2[f][l]);
			}
		}
		multiplicacion=multi(arreglo1,arreglo2,arreglo3);
		return 0;
	}