#include<stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
	srand(time(NULL));
int dizi[50],a,dt=0,o=0,c=0,b;

for(int i=0;i<50;i++){
	a=rand()%100;
	dizi[i]=a;
}
for(int j=0;j<50;j++){
	printf("%d ",dizi[j]);
	dt=dt+dizi[j];	
	o=dt/50;

}
for(int k=0;k<50;k++){
	
	if(dizi[k]<o){
		c++;
		}
		else{
		b++;
		}
	}
	
printf("\ndizi elemanlari toplam= %d\ndizi elemanlari ortalama= %d\nortalamanin ustunde olan sayilarin sayisi= %d\nortalamanin altinda olan sayilarin sayisi= %d",dt,o,b,c);
return 0;
}
