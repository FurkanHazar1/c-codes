#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	char kelime[20],harf,*ptr,sayac=0;
	printf("kelime giriniz: ");
	gets(kelime);
	printf("bulunmasini istediginiz harfi giriniz: ");
	scanf("%c",&harf);
	ptr=&kelime[0];
	for(int i=0;i<20;i++){
		if(*ptr==harf){
			sayac++;
		}
		ptr++;
	}
	printf("harf %d kadar geciyor",sayac);
	return 0;
}
