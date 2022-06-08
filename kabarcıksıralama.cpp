#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main(){
	int dizi[100],enbuyuk;
	srand(time(NULL));
	for(int i=0;i<100;i++){
	dizi[i]=rand()%100;
	printf("%d ",dizi[i]);
	}
	printf("\n");
	for(int i=0;i<100;i++){
		for(int j=1;j<99;j++){
			if(dizi[j-1]>dizi[j]){
				enbuyuk=dizi[j];
				dizi[j]=dizi[j-1];
				dizi[j-1]=enbuyuk;
				
			}
		}
	}
		for(int i=0;i<100;i++){
			printf("%d ",dizi[i]);
		}
	return 0;
}
