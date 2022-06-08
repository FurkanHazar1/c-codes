#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	srand(time(NULL));
	int dizi[100],k,i,j;
	printf("dizi\n");
	for(i=0;i<100;i++){
		dizi[i]=rand()%100;
		printf("%d. eleman=%d\n",i+1,dizi[i]);
	}
	printf("\nsiralanmis hali=\n");
	for(i=1;i<100;i++){
		k=dizi[i];
		for(j=i-1;j>=0 && k<=dizi[j];j--){
		dizi[j+1]=dizi[j];
		
		}
		dizi[j]=k;	
	}
	for(i=0;i<100;i++){
		printf("%d. eleman= %d\n",i+1,dizi[i]);
	}
	
	return 0;
}
