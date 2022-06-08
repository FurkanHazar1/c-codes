#include<stdio.h>
int asal_kontrol(int);


int main(){
	int i,eleman,sayi;
	FILE *dosya=fopen("sayilar.txt","r");
	FILE *dosya2=fopen("sayilar2.txt","w");
	while(!feof(dosya)){
		fscanf(dosya,"%d",&sayi);
		if(asal_kontrol(sayi)){
			fprintf(dosya2,"%d\n",sayi);
		}
	}
	fclose(dosya);
	fclose(dosya2);
	return 0;
}


int asal_kontrol(int sayi){
	int kontrol=1,j,i;
	for(i=sayi-1;i>1;i=i-1){
		if(sayi%i==0){
			kontrol=0;
			return 0;
		}
	}
			return 1;
}
