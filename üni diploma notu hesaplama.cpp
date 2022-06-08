#include<stdio.h>

int main(){
	float vize,final,can,dp,but;
	
	printf("lutfen vize notunuzu giriniz=");
	scanf("%f",&vize);
	printf("\nlutfen final notunuzu giriniz=");
	scanf("%f",&final);
	dp=((vize*40)/100)+((final*60)/100);
	
	printf("diploma notunuz:%.2f",dp);
	if(dp>=60){
	printf("\nGECTINIZ");
	}else{
		printf("\nButunlemeye kaldiniz\n");
		printf("Lutfen Butunleme Notunuzu Giriniz:");
		scanf("%f",&but);
		dp=((vize*40)/100)+((but*60)/100);
		printf("\ndiploma notunuz:%.2f\n",dp);
         if(dp<60); printf("KALDINIZ");
	
		
	}
		
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
