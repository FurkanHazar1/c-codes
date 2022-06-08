#include<stdio.h>
int main(){
	int sayi,i,j,at,k,a,ao;
	i=0;
	at=0;
	ao=0;
	a=0;
	while(1){
	
	printf("Lutfen Sayi Giriniz:\n");
	scanf("%d",&sayi);
	if(sayi>=0){
		i=0;
		k=0;
	
		for(j=2;j<sayi;j++){
			if(sayi%j==0){
			k=1;
			if(k==0){
				a=a+1;
				at=sayi+at;
				ao=at/a;
				break;
			}
}
	}
}
	else {
	break;
}

printf("%d asal sayi toplami\n%d asal sayilarin ortalamasi",at,ao);
}
		return 0;
}

