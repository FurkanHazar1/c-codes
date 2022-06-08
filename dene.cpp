#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	/*int dizi[50],dt=0,o,k,b;
	srand(time(NULL));
	for(int i=0;i<50;i++){
		dizi[i]=rand()%100;
		printf("dizinin %d. elemani = %d\n",i+1,dizi[i]);
	
		dt=dt+dizi[i];
	}
	o=dt/50;
	printf("toplam =%d\nortalama = %d \n",dt,o);
	for(int j=0;j<50;j++){
		if(dizi[j]<o) k++;
		
		else b++;
	}
	printf("ortalmanin altinda olan sayilarin sayisi = %d\nortalmanin ustunde olan sayilarin sayisi= %d",k,b);
	*/
/*	
	int dizi1[10],dizi2[10],c;
	srand(time(NULL));
	for(int i=0;i<10;i++){
		dizi1[i]=rand()%50;
		dizi2[i]=rand()%50;
		printf("dizi1 %d.  terim = %d		dizi2 %d. terim = %d\n",i+1,dizi1[i],i+1,dizi2[i]);
	}
	printf("degisim\n");
	for(int j=0;j<10;j++){
		if(j%2==0){
			c=dizi1[j];
			dizi1[j]=dizi2[j+1];
			dizi2[j+1]=c;
			
		}
		printf("dizi1 %d. terim = %d		dizi2 %d. terim = %d\n",j+1,dizi1[j],j+1,dizi2[j]);
	}
*/	




for(int i=0;i<5;i++){
	for(int j=0;j<5;j++){
	if(i>=j){
		printf("*");
	}
	else printf(" ");		
	}
	printf("\n");
}


























	return 0;
}
