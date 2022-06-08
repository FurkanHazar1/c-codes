#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main(){
/*	int dizi[50],dt=0,o,k=0,a=0;
	for(int i=0;i<50;i++){
		dizi[i]=rand()%100;
		printf("dizinin %d. elemani: %d\n",i+1,dizi[i]);
		dt=dt+dizi[i];
	}
	o=dt/50;
	for(int j=0;j<50;j++){
		if(dizi[j]<o){
			
			k++;
			
		}else{
			
			a++;
		}
		
	}
	printf("\n\ndizi eleman toplam: %d\ndizi eleman ortalama: %d\n\ndizi ortalamadan dusuk sayi sayisi:%d\n\ndizi ortalamadan yuksek sayi sayisi:%d",dt,o,k,a);
*/

int dizi1[10],dizi2[10],c;
srand(time(NULL));
for(int i=0;i<10;i++){
	dizi1[i]=rand()%50;
	dizi2[i]=rand()%50;
	printf("dizi1 %d. eleman= %d     dizi2 %d. eleman= %d\n",i+1,dizi1[i],i+1,dizi2[i]);
	
}
printf("\n\n");
for(int j=0;j<10;j++){
		if(j%2==0){
		c=dizi1[j];
		dizi1[j]=dizi2[j+1];
		dizi2[j+1]=c;	
	}
	printf("dizi1 %d. eleman = %d     dizi2 %d. eleman = %d\n",j+1,dizi1[j],j+1,dizi2[j]);
}






















	
	return 0;
}
