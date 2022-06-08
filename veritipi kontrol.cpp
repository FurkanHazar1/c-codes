#include<stdio.h>
#include<stdlib.h>


int main(){
	int sayi1=5,a=1;
	short sayi2=23;
	unsigned int sayi3=5;
	unsigned short sayi4=5;
	int ak,b,c,d;
	ak=sizeof(sayi1);
	b=sizeof(sayi2);
	c=sizeof(sayi3);
	d=sizeof(sayi4);
	unsigned char sayi=217;
	a<<=7;
	a=sayi&a;
	sayi<<=1;
	a>>=7;
	sayi=a|sayi;
	printf("%d",sayi);
}



