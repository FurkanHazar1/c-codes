#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int degerdoldur(int [],int);
int degerdoldur2(int *,int);
int main(){
	srand(time('\0'));
	int sayi,*ptr;
	printf("dizi eleman sayisini giriniz\n");
	scanf("%d",&sayi);
	int dizi[sayi];
	degerdoldur(dizi,sayi);
	degerdoldur2(&dizi[0],sayi);
	return 0;
}
int degerdoldur(int dizi[],int sayi){
	int i;
	for(i=0;i<sayi;i++){
		dizi[i]=rand()%100;
		printf("%d\n",dizi[i]);
	}
	printf("\n\n");
}
int degerdoldur2(int *ptr,int sayi){
	
	for(int i=0;i<sayi;i++){
		printf("%d\n",*ptr);
		ptr++;
	}
}
