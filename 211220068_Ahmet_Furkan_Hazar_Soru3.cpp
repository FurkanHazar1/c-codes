#include <stdio.h>
#include <conio.h>

int main(){
	
	int sayi1;
	int sayi2;
	int sayi3;
	int sayi4=3;
	
	printf("Lutfen ortalamasini istediginiz sayilari giriniz:\n");
	scanf("%d%d%d",&sayi1,&sayi2,&sayi3);
	printf("(%d+%d+%d)/%d=%d",sayi1,sayi2,sayi3,sayi4,(sayi1+sayi2+sayi3)/sayi4);
	
	
	
	
	
	getch();
	return 0;
}

