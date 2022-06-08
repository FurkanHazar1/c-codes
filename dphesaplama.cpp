#include<stdio.h>
int main(){
	float vize,final,but,dp;
	
	printf("lutfen vize notunuzu giriniz:\n ");
	scanf("%f",&vize);
	printf("lutfen final notunuzu girin:\n");
	scanf("%f",&final);
	
	dp=(0.4*vize)+(0.6*final);

	printf("diploma notunuz:%.2f\n",dp);
	if(dp>=60){
		printf("GECTINIZ");
		
		
	}
	else{
		printf("butunlemeye kaldiniz\n");
		printf("lutfen butunleme notunuzu girin:");
		scanf("%f",&but);
		dp=(0.4*vize)+(0.6*but);
		printf("\ndiploma notunuz:%.2f",dp);
		if(dp<60){
			printf("\nkaldiniz");
			
		}
		else{
			printf("\ngectiniz");
		}
		
	}
	
	
	
	
	return 0;
}
