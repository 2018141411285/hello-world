#include<iostream>

using namespace std;
bool is_prime(int n) {
	int m = sqrt(n);
	if (n == 1 || n == 0)return false;
	if (n == 2 || n == 3)return true;
	for (int j = 2; j <= m; j++)
	{
		if (n%j == 0) {
			return false;
		}
	}
	return true;
}
int gewei(int n) {
	int result = 0;
	while (n != 0) {
		if (n % 10 != 0||n>=10) {
			result += n % 10;
			n /= 10;
		}
	}
	return result;
}
int geweipinfang(int n) {
	int result = 0;
	while (n != 0) {
		if (n % 10 != 0 || n >= 10) {
			result += (n % 10)*(n % 10);
			n /= 10;
		}
	}
	return result;
}
int main() {
	int n = 2;
	while (n<1000) {
		if (is_prime(n) && is_prime(gewei(n)) && is_prime(geweipinfang(n))) {
			cout << n << "Тњзу" << endl;
		}
		cout << n << endl;
		n++;
	}
	system("pause");
}