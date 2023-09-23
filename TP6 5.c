#include <stdio.h>
void combinacion (char p1[], char p2[], char  pt[]){
	int i,j;
	
	for(i=0;i<10;i++){
		pt[i] = p1[i];
		if(p1[i]==0)break;
	}
	
	for(j=0;i<20;j++,i++){
		pt[i] = p2[j];
		if(p2[j]==0)break;
	}

}
	int main(void){
	char c1[10],c2[10],ct[20];
	
	printf("\n palabra 1: ");
	scanf("%s",&c1);
	printf("\n palabra 2: ");
	scanf("%s",&c2);
	
	combinacion(c1,c2,ct);
		
	printf("\n palabra combinada: %s",ct);
}
