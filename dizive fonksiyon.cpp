#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void dizieleman(int [],int[],int);
int karsilastirma(int [],int [],int);
void siralama(int [],int [],int);
int main(){
	int i,j,boyut,dizi1[100],dizi2[100];
	printf("ilk dizinin kac elemanli olacgini giriniz: ");
	scanf("%d",&boyut);
	dizieleman(dizi1,dizi2,boyut);
	
	for(i=0;i<boyut;i++)
	printf("%d		%d\n",dizi1[i],dizi2[i]);
	printf("\nsiralanmis hali\n");
	siralama(dizi1,dizi2,boyut);
	for(j=0;j<boyut;j++)
	printf("%d		%d\n",dizi1[j],dizi2[j]);
	printf("%d eleman iki dizidede bulunuyor",karsilastirma(dizi1,dizi2,boyut));
	getch();
}
void dizieleman(int dizi[],int dizi2[],int boyut){
	int i,j;
	srand(time(NULL));
	for(i=0;i<boyut;i++){
		dizi[i]=rand()%50;
		dizi2[i]=rand()%50;
	}
	
}
int karsilastirma(int dizi[],int dizi2[],int boyut){
	int i,j,sayac=0;
	for(i=0;i<boyut;i++){
		for(j=0;j<boyut;j++){
			if(dizi[i]==dizi2[j]){
				sayac++;
				break;	
			}
	}
	}
	return sayac;
}
void siralama(int dizi[],int dizi2[],int boyut){
	int gsayi=0,gsayi2=0,i,j;
	for(i=0;i<boyut;i++){
		for(j=i+1;j<boyut;j++){
			if(dizi[i]>dizi[j]){
				gsayi=dizi[i];
				dizi[i]=dizi[j];
				dizi[j]=gsayi;
			}
				if(dizi2[i]>dizi2[j]){
				gsayi2=dizi2[i];
				dizi2[i]=dizi2[j];
				dizi2[j]=gsayi2;
			}
			
		}
	}
}

