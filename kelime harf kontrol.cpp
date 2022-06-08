#include<stdio.h>
void harfbulucu(char []);
int main(){
	char kelime[20];
	puts("kelime giriniz: ");
	gets(kelime);
	harfbulucu(kelime);
	return 0;
}
void harfbulucu(char kelime[]){
int i,k=0,j,a=60;
char harf[52];
	for(i=0,j=97;i<52;i++,j++){
		harf[i]=j;
		if(i>=26){
			harf[i]=a;
			a++;
		}
	}
	for(j=0;j<26;j++){
		for(i=0;kelime[i]!='\0';i++){
			if(kelime[i]==harf[j]||kelime[i]==harf[j]-32){
				k++;
			}
		}
		if(k!=0){
		printf("%c harfi %d kadar bulunuyor\n",harf[j],k);
		}
		k=0;
	}
}





















