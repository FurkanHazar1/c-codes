#include<stdio.h>
int main(){
	int gun,yil,ay,ygun;
	printf("g�n girin: ");
	scanf("%d",&gun);
	if(gun>365){
		yil=gun/365;
		ygun=gun%365;
	}
	else {
	yil=0;
	ygun=gun;
	}
	ay=ygun/12;
	ygun%=12;
	printf("yil= %d ay = %d g�n = %d",yil,ay,ygun);
}

