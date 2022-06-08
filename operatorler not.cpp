#include <stdio.h>
#include <math.h>



int main(int argc,char **argv){
	//ARÝTMETÝK OPERATÖRLER
	
	int sayi=55,sayi2=2;//atama operatörü
	printf("%d+%d=%d\n",sayi,sayi2,sayi+sayi2);//toplama operatörü
	printf("%d-%d=%d\n",sayi,sayi2,sayi-sayi2);//cikarma operatörü
	printf("%d*%d=%d\n",sayi,sayi2,sayi*sayi2);//carpma operatörü
	printf("%d/%d=%d\n",sayi,sayi2,sayi/sayi2);//bolme operatörü
	printf("%d%%%d=%d\n",sayi,sayi2,sayi%sayi2);//mod alma operatörü
	
	//atama operatörü ile kullaným
	int sonuc=1;
	sonuc*=4;//sonuc=sonuc*4;=4
	sonuc*=3;//sonuc=sonuc*3=12
	sonuc*=2;//24
	printf("Sonuc:%d\n",sonuc);
	
	int i=5;
	printf("i degeri:%d\n",++i);//önce arttýrma, sonra yazdýrma
	printf("i degeri:%d\n",i++);//önce yazdýrma, sonra arttýrma
	
	//BIT DUZEYINDE ISLEMLER.
	
	int bitDuzeyi=64;
	printf("Sola kaydirilmis sonuc:%d\n",bitDuzeyi<<1);//2 ile carpma anlamýna geliyor
	printf("Saga kaydirilmis sonuc:%d\n",bitDuzeyi>>1);//2 e bölme anlamýna geliyor.
	
	
	//MANTIKSAL OPERATÖRLER-ÝLÝÞKÝSEL OPERATÖRLER
	int sayi1=15,sayi2=25;
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1>sayi2);//buyuktur
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1<sayi2);//kucuktur
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1==sayi2);//esittir
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1!=sayi2);//esit degildir
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1>=sayi2);//buyuk esittir.
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,sayi1<=sayi2);//kucuk esittir.
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,!(sayi1==sayi2));//unlem terse çevirdi
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,(sayi1==sayi2)&&(sayi1<sayi2));//iki taraf da 1 olmalý=1
	printf("Ilk sayi:%d,ikinci sayi:%d,sorgu sonucu(0 veya 1):%d\n",sayi1,sayi2,(sayi1==sayi2)||(sayi1>sayi2));//bir taraf 1 ise=1
	
	//BIT DUZEYINDEKI MANTIKSAL OPERATÖRLER
	int bitDuzeyi=10;//0100 0000
	int bitDuzeyi2=13;//0010 0000
	
	printf("Ve operatoru sonuc:%d\n",bitDuzeyi & bitDuzeyi2);
	
	printf("Veya operatoru sonuc:%d\n",bitDuzeyi | bitDuzeyi2);
	
	/*
	VE
	64= 0100 0000
	32= 0010 0000
	s=	0000 0000	=0
	
	VEYA
	64= 0100 0000
	32= 0010 0000
	s=	0110 0000=2^6*1+2^5*1=64+32=96
	*/
	return 0;
}
