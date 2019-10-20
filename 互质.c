#include"stdio.h"
#include<stdbool.h>
#include<stdlib.h>
int main(){//两整数互质
	int a, b;
	printf("请输入两个整数。");
	scanf("%d%d", &a, &b);
	bool huzhi(int a,int b){
	   if(a <=0 || b<=0 || a==b){
	   return false;
	   }
	   else if(a==1 || b==1){
	   return true;
	   }
	   else{
	   while(1){
	   int t = a%b;
	   if(t == 0){
	   break;
	   }
	   else{
	   a = b;
	   b = t;
	   }
       }
       if( b > 1){
	   return false;
       }
	   else{
	   return true;
       }
	   }
	}
	if(huzhi(a,b))
		printf("两数互质。");
	else
	    printf("不互质");
	system("pause");
	return 0;
}