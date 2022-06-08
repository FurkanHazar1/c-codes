#include<stdio.h>
#include<string.h>
int main(){
	char kelime[20],str[20];
	int i,j,k,kont;
	puts("kelime gir: ");
	gets(kelime);
	puts("str gir: ");
	gets(str);
	
	int uzun=strlen(str);
		for(i=0;kelime[i]!='\0';i++){
		
			if(kelime[i]==str[0]){
				for(j=i,k=0;str[k]!='\0';j++,k++){
					if(kelime[j]!=str[k]){
					kont=0;
					break;}
					else if(kelime[j]==str[k]){
						kont=1;
						i++;
					}
				}
			}
			
		}
		if(kont==1){
			printf("str kelimenin icinde");
		}
		else{
			printf("str kelimenin icinde yok");
		}
	
	
	return 0;
}
