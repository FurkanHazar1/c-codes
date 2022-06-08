#include<stdio.h>
#include<string.h>
int main(){
char metin[200],metin2[200],kelime[20],kelime2[20];
int i,j,a,k,b,ksayi=0,bosluk=0;
printf("ilk metini gir: ");
gets(metin);
printf("ikinci metini girin: ");
gets(metin2);
for(i=0;metin[i]!='\0';i++){
	if(metin[i]==' ')bosluk++;
}
k=0;
ksayi=bosluk+1;
int kont=0,OrtakKelime=0;
while(j=ksayi){
	for(i=k,b=0;metin[i]!=' ';b++,i++){
	kelime[b]=metin[i];
		k++;
	}
	k++;
	for(i=0;metin2[i]!='\0';i++){
		if(metin2[i]==kelime[0]){
			for(a=i,b=0;kelime[b]!='\0';a++,b++){
				if(metin2[a]!=kelime[b]){
				kont=0;	
				break;
			}
				else{
					kont=1;
					break;
				}
			}
		}
	}
	if(kont==1){
		OrtakKelime++;
	}
j++;	
}
	printf("%d osayi",OrtakKelime);	
return 0;
}
