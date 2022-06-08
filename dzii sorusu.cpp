#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi[10],dizi2[10],dizi3[10];
	srand(time(NULL));
	printf("dizi 1			dizi 2\n");
	for(int i=0;i<10;i++){
		dizi[i]=rand()%50+50;
		dizi2[i]=rand()%50+50;
		printf("%d. terim= %d		%d. terim= %d\n",i+1,dizi[i],i+1,dizi2[i]);
	}
	printf("dizi3\n");
	
	for(int j=0;j<10;j++){
		if(dizi[j]<=60){
			dizi3[j]=dizi[j];
		}
		else{
			dizi3[j]=dizi2[j];
		}
		printf("%d. terim =%d \n",j+1,dizi3[j]);
	}
	
	
	return 0;
}
