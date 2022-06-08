#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int rastgele(int [],int);

int main(){
	int dizi[100];
	rastgele(dizi,100);
	for(int i=0;i<100;i++)printf("%d ",dizi[i]);
}
int rastgele(int dizi[],int a){
	int i;
	srand(time(NULL));
	for(i=0;i<100;i++){
		dizi[i]=rand()%100;
	}
}
