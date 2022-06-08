#include<stdio.h>
int iki(int x){
	int i=sizeof(int)*8-1;
	for(;i>=0;i--){
		if(x&1<<i)
		putchar('1');
		else
		putchar('0');
		if(i%4==0) putchar(' ');
	}
}


int kaydirma(unsigned char ,int );

int main(){
	unsigned char sayi,sonuc;
	int kaydirmaMiktari;
	printf("sayi giriniz: ");
	scanf("%d",&sayi);
	printf("kaydirma miktari giriniz: ");
	scanf("%d",&kaydirmaMiktari);
	int bit=iki(sayi);
	
	sonuc=kaydirma(sayi,kaydirmaMiktari);
	int k=iki(sonuc);
	printf("\n%d sayisini \nolusan sayi: %d",bit,k);
	
	return 0;
}

int kaydirma(unsigned char sayi, int kaydirmaMiktari){
	int i,a=1;
	for(i=0;i<kaydirmaMiktari;i++){
	a=1;
	a<<=7;
	a=sayi&a;
	sayi<<=1;
	a>>=7;
	sayi=a|sayi;
	
	}
	return sayi;
}
