#include<stdio.h>


int kaydirma(unsigned char ,int );

int main(){
	unsigned char sayi,sonuc;
	int kaydirmaMiktari;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	printf("kaydirma miktari giriniz: ");
	scanf("%d",&kaydirmaMiktari);
	sonuc=kaydirma(sayi,kaydirmaMiktari);
	printf("%d,%X sayisini %d kadar sola left rotated shift yaparak kaydirinca olusan sayi: %d,%X",sayi,sayi,kaydirmaMiktari,sonuc,sonuc);
	
	return 0;
}

int kaydirma(unsigned char sayi, int kaydirmaMiktari){
	int i,a=1;
	for(i=0;i<kaydirmaMiktari;i++){
	
	a<<=7;
	a=sayi&a;
	sayi<<=1;
	a>>=7;
	sayi=a|sayi;
	
	}
	return sayi;
}
