#include<stdio.h>
#include<conio.h>
#include<math.h>
int cevirme(int,int);
int main(){
	int sayi,basamak;
	printf("sayi girin: ");
	scanf("%d",&sayi);
	printf("basamak sayisi gir: ");
	scanf("%d",&basamak);
	printf("%d",cevirme(sayi,basamak));
	return 0;
}
int cevirme(int sayi,int basamak){
	int k=pow(10,basamak-1),j,i,bt,a;
	for(i=basamak;i>0;i--){
		a=sayi/k;
		bt=a*pow(2,i);
		j=bt+j;
		sayi=sayi%basamak;
		k=k/10;
	}
	return bt;
}
