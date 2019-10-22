#include"stdio.h"
int main(){
	float a,b;
	printf("Please enter two float numbers. ");
	scanf("%f%f"&a,&b);
	if(a-b<0.00001&&a-b>0){
		printf("a=b");
	}
	else if(a-b<0){
		printf("a<b");
	}
	else printf("a>b");
	return 0;
} 
