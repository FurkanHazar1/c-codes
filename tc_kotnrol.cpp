#include<stdio.h>
int tc_kontrol(int[],int);
int tc_basamak(double);
int main(){
	double tc;
	printf("tc no girin lütfen:\n");
	scanf("%d",&tc);
	tc_basamak(tc);
	return 0;
}

int tc_basamak(double tc){
	int basamak[11],i;
	double geciciTc;
	geciciTc=tc;
	for(i=0;i<11;i++){
		basamak[i]=geciciTc/10;
		geciciTc=geciciTc%10;
		printf("%d\n",basamak[i]);
	}
}
