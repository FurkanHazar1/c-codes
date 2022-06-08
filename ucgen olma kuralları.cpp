#include <stdio.h>



int main(){
int a,b,c,ucgen;
printf("lutfen ucgen kenarlarini giriniz: a b c seklinde\n");
scanf("%d%d%d",&a,&b,&c);
	
if((a-b)<0){
	
	(a-b)== (a-b) * (-1);
    if((a-b)<c&&c<(a+b)){
    	c==true;
    	printf("\nc kenari uygun");
	}
	else{
	c==false;
	printf("\nc kenari uygun degil ");
	}
}
else{
	if((a-b)<c&&c<(a+b)){
		c==true;
	printf("\nc kenari uygun");
	}
	else{
	c==false;
	printf("\nc kenari uygun degil ");
	}

}	



if((a-c)<0){
	
	(a-c)== (a-c) * (-1);
    if((a-c)<b&&b<(a+c)){
    	b==true;
    	printf("\nb kenari uygun");
	}
	else{
	b==false;
	printf("\nb kenari uygun degil ");
	}
}
else{
	
	if((a-c)<b&&b<(a+c)){
	 b==true;
	printf("\nb kenari uygun");
	}
	else{printf("\nb kenari uygun degil ");
	b==false;
	}

}	

if((a-b)<0){
	
	(c-b)== (c-b) * (-1);
    if((c-b)<a&&a<(c+b)){
    		a==true;
    	printf("\na kenari uygun");
	}
	else{
	a==false;
	printf("\na kenari uygun degil ");
	}
}
else{
	if((c-b)<a&&a<(c+b)){
		a==true;
	printf("\na kenari uygun");
}
	else{
		a==false;
	printf("\na kenari uygun degil ");
	}

}		
	
	if(c==1,a==1,b==1){
		printf("\nucgen olusur");
		
	}
	else{
		printf("\nucgen olusmaz");
	}
	
	
	return 0;
}
