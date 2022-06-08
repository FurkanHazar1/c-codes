#include<stdio.h>

	/*int n,i,k;
	printf("kacýncý degere kadar dizi gormek istersiz: \n");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		i=i+(i++);
		printf(" %d",i);
		
	}
	
	
	
	
	
	
	return 0;*/
/*
int main(){
int sayac, n, t1=0, t2=1, goster=0;
printf("Kaç terim yazilsin? -> ");
scanf("%d",&n);
printf("Fibonacci Serisi: %d %d ", t1, t2);
/* Ýl iki terimi goster */
//sayac=2;
/* sayac=2 denmesinin nedeni ilk iki teriminin zaten yazýlmýþ olmasýdýr */
/*while (sayac<=n) {
goster=t1+t2;
t1=t2;
t2=goster;
++sayac;
printf("%d ",goster);
}

return 0;
}*/



int main(){
int	a,b,i,tp;

while(1){
tp=0;
printf("sayi gir :\n");
scanf("%d",&a);
printf("kackere toplamak istiyorsun:\n");
scanf("%d",&b);
for(i=1;i<=b;i++){
	tp=a+tp;
printf("%d+",tp);
if(i==b)
printf(" =");
}
printf("%d\n",tp);
}
	
	
	return 0;
}

















