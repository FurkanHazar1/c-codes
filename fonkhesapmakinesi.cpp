#include<stdio.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
int PerfectNumber(int),DiziEleman(int);
int main(){
	srand(time(NULL));
int eleman;
printf("dizi kac elelmanli olsun? ");
scanf("%d",&eleman);
int dizi[eleman];
DiziEleman(eleman);
printf("\ndizinin elemanlari bunlar");
getch();
}
int DiziEleman(int boyut){
	int a,k,dizi[k];
	a=k;
	if(k==boyut){
		return 0;
	}
	dizi[k]=rand()%100;
	printf("%d\n",dizi[k]);
	k++;
	DiziEleman(dizi[],boyut);
}
