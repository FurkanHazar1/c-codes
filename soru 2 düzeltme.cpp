#include<stdio.h>


int main(){
	
	int sayi1,top,art,b;
	
	
	printf("sayi gir: \n");
	scanf("%d",&sayi1);
	top=0;
	art=0;
	for(b=0;b<sayi1;b+=2){
		top=top+b;
		if(sayi1%2==0){
			art=(top*2)/(sayi1);
			
		}
		else{
			art=(top*2)/(sayi1+1);
		}
		
		
		
	}
	printf("toplam:%d\nortalama:%d",top,art);
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
