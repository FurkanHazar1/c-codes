#include<stdio.h>
#include<math.h>
int main(){
	
	
int s1,s2,s3;
float delta;
printf("lutfen sayi giriniz\n");
scanf("%d%d%d",&s1,&s2,&s3);

delta=pow(s1,2)-4*s2*s3;
printf("delta=%.0f\n",delta);
printf("delta sifirdan buyukmu? %d",delta>=0);

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
