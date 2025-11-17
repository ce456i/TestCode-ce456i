#include<iostream>
#include<cmath>
using namespace std;

int main() {
	int n;
	cin >> n;
	
	int power[10];
	for (int i = 0; i < 10; ++i) {
		power[i] = pow(i, n);
	}

	int start = pow(10, n - 1);
	int end = pow(10, n) - 1;

	for (int a = start; a <= end; ++a) {
		int temp=a;
		int sum = 0;
		while (temp > 0) {
			int k = temp % 10;
			sum += power[k];
			temp /= 10;
		}
		if (sum == a) {
			cout << a << endl;
		}
	}
	return 0;
}
