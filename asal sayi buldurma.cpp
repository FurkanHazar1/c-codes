#include <stdio.h>

int main(){
	int sayi,i,a;
	
	printf("sayi gir:\n");
	scanf("%d",&sayi);
	a=0;
	for(i=sayi-1;i>1;i=i-1){
		if(sayi%i==0){
			a=1;
		}
	
	}
		if(a==1){
		printf("asal sayi degil");
	}
		else{
			printf("asal sayidir");
		}
		
	
	return 0;
}
