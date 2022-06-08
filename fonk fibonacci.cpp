#include<stdio.h>
#include<conio.h>
int fibonacci(int);
int main(){
	int ustlimit,i;
	printf("ust limit gir: ");
	scanf("%d",&ustlimit);
	for(i=0;i<ustlimit;i++){
		printf("%d ",fibonacci(i));
	}	
	getch();
}
int fibonacci(int sayi){
	if(sayi==0||sayi==1){
		return sayi;
	}
	else{
		return fibonacci(sayi-1)+fibonacci(sayi-2);
	}
}
