#include<stdio.h>
int diagonalbulma(int [],int []);
int main(){
	int dizi[3][3],carpim=1;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d. elemani gir: ",i+j);
			scanf("%d",&dizi[i][j]);
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(i==j){
				carpim*=dizi[i][j];
			}
		}
	}
	printf("\ncarpim = %d",carpim);
return 0;
}
