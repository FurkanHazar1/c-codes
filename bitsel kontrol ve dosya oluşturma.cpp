#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int bitKontrol(unsigned char);
int main(){
	FILE *dosya= fopen("sayilar0.txt","w");
	FILE *dosya2=fopen("sayilar1.txt","w");
	unsigned char sayi,eleman;
	srand(time(NULL));
	for(int i=0;i<100;i++){
		int mask=1;
		sayi=rand()%100;
		eleman=bitKontrol(sayi);
		printf("%d\n",sayi);
		if(eleman==1){
			mask<<=2;
			mask=~mask;
			sayi=sayi&mask;
			fprintf(dosya2,"%d\n",sayi);
		}
		else{
			mask<<=3;
			sayi=sayi|mask;
			fprintf(dosya,"%d\n",sayi);
		}
		
	}
	fclose(dosya);
	fclose(dosya2);
	
	
	return 0;
}
int bitKontrol(unsigned char sayi){
	unsigned char kontrol=1,a;
	a=kontrol<<4;
	kontrol=sayi&a;
	if(kontrol==16)
		return 1;
	
}
