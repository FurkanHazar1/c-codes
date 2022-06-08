#include<stdio.h>
int main(){
	char metin[100];
	int bosluk=0,i,j;
	printf("metin giriniz: ");
	scanf("%s", metin);
	for(i=0;i<100;i++){
		printf("%d ",i);
		if(metin[i]==' '){
			bosluk++;
		}
		
	}
	printf("\nmetindeki kelime sayisi = %d",bosluk+1);
	return 0;
}
