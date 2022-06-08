#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi[50],degis[50],kont[50];
	srand(time(NULL));
		for(int i=0;i<50;i++){
		dizi[i]=rand()%100;
		printf("%d. eleman = %d\n",i+1,dizi[i]);
		}
		printf("\n\n");
		for(int i=49;i>=0;i--){
			dizi[i]=kont[i];
			for(int j=0;j<i&&kont[i]>dizi[j];j++){
				dizi[j+1]=dizi[j];
			}
			printf("eleman= %d\n",dizi[i]);
		}
	return 0;	
}
