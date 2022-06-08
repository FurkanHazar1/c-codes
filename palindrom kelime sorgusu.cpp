#include<stdio.h>
#include<string.h>
int main(){
	char kelime[20],terskelime[20];
	int i,c=0,uzunluk;
	puts("kelime giriniz:");
	gets(kelime);
	uzunluk=strlen(kelime);
	for(i=0;i<uzunluk;i++){
		terskelime[i]=kelime[(uzunluk-1)-i];
		if(terskelime[i]==kelime[i]){
			c++;
		}
	}
	if(c==uzunluk){
		puts("kelime palindromdur");
	}
	else{
		puts("kelime palindrom degildir");
	}
	return 0;
}
