#include <stdio.h>
float determinante(float arr[][3]){
	float det;
	det=arr[0][0]*arr[1][1]*arr[2][2]
	 +arr[0][1]*arr[1][2]*arr[2][0]
	 +arr[1][0]*arr[2][1]*arr[0][2]
	 -arr[0][2]*arr[1][1]*arr[2][0]
	 -arr[0][1]*arr[1][0]*arr[2][2]
	 -arr[1][2]*arr[2][1]*arr[0][0];
	 return det;
}
	int main(void){
		float arreglo [3][3];
		float determ;
		int k,j;
		for(k=0;k<3;k++){
			for(j=0;j<3;j++){
				printf("ingrese el elemento %d %d\n",k+1,j+1);
				scanf("%f",&arreglo[k][j]);
			}
		}
		determ=determinante(arreglo);
		printf("el determinante es %f\n",determ);
		return 0;
	}