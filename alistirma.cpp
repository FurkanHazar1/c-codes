#include<stdio.h>

int max(int *ptr){
	int maks=*ptr;
	for(int i=0;i<10;i++){
		if(maks<*ptr+1){
			maks=*ptr+1;
		}
		ptr++;
	}
return maks-1;
	
}
int main(){
	int sayi,*ptr,dizi[10];
	for(int i=0;i<10;i++){
		printf("%d. indeks degeri gir",i+1);
		scanf("%d",&dizi[i]);
	}
	ptr=&dizi[0];
	printf("maksimum sayi= %d\n",max(ptr));
	return 0;
}


int main(){
	int *ptr,x=6,y=5,z=9,*ptr2,*ptr3;
	ptr=&x;
	ptr2=&y;
	ptr3=&z;
	printf("X=%u		y=%d		z=%d\n",*ptr,*ptr2,ptr3);
	return 0;
}

int main(){
	char *ptr[3]={"ali","memet","faruk"};
	printf("%s	%s	%s",ptr,*(ptr+1),ptr[2]);
	return 0;
}


























