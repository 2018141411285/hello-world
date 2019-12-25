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
int main() {
	int n = 100;
	while (n < 1000) {
		if (is_prime(n)) {
			cout << n  << endl;
		}
		n++;
	}
	system("pause");
}