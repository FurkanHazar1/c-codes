#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
int sayi,i,j,k;
int sayi1[25];
srand(time(NULL));		

for(i=0;i<25;i++){
	sayi1[i]=(rand()%50)+50;
	printf("%d",sayi1[i]);
}









return 0;
	
}
