#include<stdio.h>

int toplama(int);

int main(){
	int sayi,toplam;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	toplam=toplama(sayi);
	printf("%d sayisina kadar olan sayiarin toplami = %d",sayi,toplam);	
}
int toplama(int sayi){
	int toplam;
	if(sayi<=1)
	return 1;
	
	else
	return sayi+toplama(sayi-1);
}

