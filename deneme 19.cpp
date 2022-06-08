#include<stdio.h>
int main(){
	char metin[100];
	int i;
	printf("metin girin: ");
	gets(metin);
	for(i=0;metin[i]!='\0';i++){
		if(metin[i]>=65&&metin[i]<=90){
			metin[i]+=32;
		}
		else if(metin[i]>=97&&metin[i]<=122){
			metin[i]-=32;
		}
		printf("%s",metin[i]);
	}
	return 0;
}
