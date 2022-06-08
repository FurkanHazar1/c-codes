#include<stdio.h>

int main(){

int s1,i,ct,tt,ca,ta,cg,tg;
ct=0;
tt=0;

for(i=1;i<=4;i++){
	printf("sayi gir:");
	scanf("%d",&s1);
	if(s1%2==0){
		ct+=s1;
		ca=ct/i;
	
	}else{
		tt+=s1;
	    ta=tt/i;
	}
	
}
	

	printf("cift ortalama: %d\n",ca),
	printf("tek ortalam:%d\n",ta);
	printf("cift toplam =%d\n",ct);
	printf("tek toplam %d\n",tt);
	
	
	
	
	return 0;
}
