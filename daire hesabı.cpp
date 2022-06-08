#include<stdio.h>
#include<math.h>
int main(){
	float r,alan,cevre,pi;
	
	
	printf("lutfen alanini ve cevresini bulmak istediginiz dairenin yaricapini giriniz :");
	scanf("%f",&r);
	pi=3.12;
	alan=pi*pow(r,2);
	cevre=2*pi*r;
	printf("dairenin alaný=%.2f\ndairenin cevresi:%.2f",alan,cevre);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
	
}
