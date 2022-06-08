#include<stdio.h>
int main(){
	char metin[100];
	int bosluk=0,i;
	printf("lutfen metin giriniz: ");
	gets(metin);
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]==' '){
			bosluk++;
		}
	}
	printf("metindeki kelime sayisi= %d",bosluk+1);
	return 0;	
}
