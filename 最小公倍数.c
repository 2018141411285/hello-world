#pragma warning(disable:4996)
#include<stdio.h>
#include<stdlib.h>
int main() {//最小公倍数 
	int a, b, k, i = 0;
	int c = 1;
	printf("请输入两个整数。");
	scanf("%d%d", &a, &b);
	if (a < b)
		k = a/2;
	else if (a > b)
		k = b/2;
		else if(a==b){
			c=a;
			printf("%d",c);
			system("pause");
			return 0;
		}
	for (i = 2; i <= k; i++) {
		if (a%i == 0 && b%i == 0) {
			c = c * i;
			a = a / i;
			b = b / i;
			i--;
		}
	}
	if (a%i != 0 || b%i != 0)
		c = c * a*b;
	printf("%d", c);
	system("pause");
	return 0;
}
