#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
	/*int a,b,c,d,i;
	srand(time(NULL));
	c=rand()%50	;
	printf("0-50 arasi sayi tuttum bu sayiyi bulmak icin deger gir\n");
	scanf("%d",&a);
	
	
/*	for(i=1;i<=10;i++){
	
	
	if(a=c){
	printf("dogru sayiyi buldun tebrikler");
	}
	else if(a<c){
	printf("daha büyük bir sayi gir");
	scanf("%d",&a);	
	}
	else if(a>c){
		printf("daha kucuk sayi gir\n");
		scanf("%d",&a);
	}
	printf("\ntuttugum sayi=%d",c);
}*/

/*
i=1;
while(i<2){

if(a=c){
	printf("dogru sayiyi buldun tebrikler");
	}
	else if(a<c){
	printf("daha büyük bir sayi gir");
	scanf("%d",&a);	
	}
	else if(a>c){
		printf("daha kucuk sayi gir\n");
		scanf("%d",&a);
	}
	printf("\ntuttugum sayi=%d",c);
i++	;
}

*/
//int i,k,l,j;

/*

for(int i=1;i<=5;i++){ //ters üçgen for dongusu
	for(int j=1;j<=9;j++){
		if(i>=j||i+j>9)
		{
		 printf(" ");
		}
		else{
			printf("*");
		}
	
	}	
	printf("\n");
}

*/









/*
while(i<=5){
	j=1;
	while(j<=10){ // while döngüsü yýldýzlý v þekli
		if(i>=j||i+j>10){
			printf("*");
		}
		else printf(" ");
		
		j++;
	}
	printf("\n");
	i++;
}
*/




/*
for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){ //ters dik üçgen
	if(i+j<=6){
		printf("*");
	}	
	else printf(" ");
			
	}
	printf("\n");
}
*/
/*
for(i=1;i<=5;i++){//baþarýsýz giriþim
	for(j=1;j<10;j++){
		if(i+j>=6 i+j<=10) printf("*");
		else printf(" ");
		
	}
	printf("\n");
	
}
*/

/*
for(i=1;i<=12;i++){
	for(j=1;j=(12-i)/2;j+=2){
		printf(" ");
	}
	printf("*");
}
*/


/*
for(int i=0;i<5;i++){
	for( int j=0;j<10;j++){
		if(i>=j){
			printf("*");
		}
		else{
			printf(" ");
		}
		
	}
	printf("\n");
}
*/


/*
int sayi,tahmin,i,j;
srand(time(NULL));
sayi=rand()%50;
printf("aklimdan 0 ile 50 arasi sayi tuttum tahmin et bunu\n ");

i=0;
while(1){
	
sayi=rand()%50;

do{

printf("sayi gir: ");
scanf("%d",&tahmin);
if(tahmin==sayi){
	printf("aklimdaki sayi = %d\n",sayi);
	printf("tebrikler dogru sayiyi buldunuz!!\n\n");
	break;
}
else if(tahmin<sayi){
	printf("daha buyuk bir sayi girin lutfen\n");
	continue;
}
else if(tahmin>sayi){

	printf("daha kucuk sayi girin\n");
	continue;
}


}
while(i=1);
printf("tekrar sayi sectim \n\n");

}



*/
for(int i=0;i<10;i++){
	
	for(int j=0;j<11;j++){
		if(i==0||i==10){
			printf("%c",219);
		}
		else if(j==0||j==10){
			printf("%c",219);
		}
		else{
			printf(" ");
		}
		if(j==10&&i==1||j==10&&i==9){
				printf("%c",219);
		}		
	}
		printf("\n");
}
	return 0;
}
