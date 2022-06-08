#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
int dizi[10],dt=0,o=0,c=0,b;

for(int i=0;i<10;i++){
	dizi[i]=rand()%10;
	printf("%d.terim=%d \n",i+1,dizi[i]);
	dt+=dizi[i];	
	
}
o=dt/10;
printf("\n");
for(int i=0;i<10;i++){
		if(dizi[i]<o){
		c++;
		printf("%d.terim ortalmadan dusuk=%d\n",i+1,dizi[i]);
		}
		else{
		b++;
			printf("%d.terim ortalmadan buyuk=%d\n",i+1,dizi[i]);
		}
	
}	
printf("\ndizi elemanlari toplam= %d\ndizi elemanlari ortalama= %d\nortalamanin ustunde olan sayilarin sayisi= %d\nortalamanin altinda olan sayilarin sayisi= %d",dt,o,b,c);
return 0;
}
