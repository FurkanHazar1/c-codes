#include <stdio.h>
#include <conio.h>

int main(){
int sayi,i,j,k;
	
printf("sayý girin: ");
scanf("%d",&sayi);
int bosluk=sayi-1;
int yildiz=sayi-bosluk; 
for(i=0;i<sayi;i++){
	
	for(j=0;j<bosluk;j++){
		printf(" ");
	}
	bosluk--;
	for(k=0;k<yildiz;k++){
		printf("*");
	}
	yildiz+=2;
	printf("\n");
}
		return 0;
	
}
