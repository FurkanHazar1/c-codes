#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	srand(time(NULL));
	int dizi[100],i,j,sayac=0;
	for(i=0;i<100;i++){
		dizi[i]=rand()%10;
		printf("%d ",dizi[i]);
	}
	dizi[50]=5,dizi[51]=3,dizi[52]=8;
	for(j=0;j<100;j++){
		if(dizi[j]==5&&dizi[j+1]==3&&dizi[j+2]==8){
			sayac++;
		}
	}
	printf("\n%d",sayac);
	return 0;
}
