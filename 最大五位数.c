////小明有 5 张数字卡片，上面分别为数字 1， 2， 3， 6， 9。小明想用这 5 张数字卡片组成一个最大的 5 位
////数，这个五位数是_______。
////编程：任意输入5个数字，将它们组合为最大的5位数输出。
//#include"stdio.h"
//#pragma warning (disable:4996)
//void swap(int*a,int*b) {
//	int temp;
//	temp = *a;
//	*a = *b;
//	*b = temp;
//}
//int main() {
//	int nums[5] = {0,0,0,0,0};
//	int max=0;
//	for (int i = 0; i < 5; i++) {
//		scanf("%d", &nums[i]);
//	}
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j < 5 - i - 1; j++) {
//			if (nums[j]< nums[j + 1]) {
//				swap(&nums[j], &nums[j + 1]);
//			}
//		}
//	}
//	max = 10000 * nums[0] + 1000 * nums[1] + 100 * nums[2] + 10 * nums[3] + nums[4];
//	printf("%d", max);
//}
