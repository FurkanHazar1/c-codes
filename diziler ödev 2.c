#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int dizi1[10],dizi2[10],a,b,i,j,c;
	srand(time(NULL));
	for(i=0;i<10;i++){
		a=rand()%50;
		b=rand()%50;
		dizi1[i]=a;
		dizi2[i]=b;
		printf("dizi1 %d. elemani: %d      dizi2 %d. elemani: %d",i+1,dizi1[i],i+1,dizi2[i]);
		if(i%2==0){
		c=dizi1[i];
		dizi1[i]=dizi2[i+1];
		dizi2[i+1]=c;
		
		}
			printf("\n\n\ndizilerin degismis sekli\ndizi1 %d. eleman :%d    dizi2 %d. eleman = %d ",i+1,dizi1[i],i+1,dizi2[i]);
			}
	
		


	return 0;
}
