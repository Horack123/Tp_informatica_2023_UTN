#include <stdio.h>
 char pipo (char pa[],char l){
	int con=0;
	int i;

	
	for(i=0;i<100;i++){
		if(pa[i]==l){
			con++;
		}
	}
	printf("la letra se repite: %d",con);	
     return 0;
 }
	int main(){
		char pa[100]={0};
		char l;
	   
		printf("\n la palabra es: ");
		scanf("%s",pa);
		printf("\n la letra es: ");
		scanf("%s",&l);
		
		pipo(pa,l);
		
}