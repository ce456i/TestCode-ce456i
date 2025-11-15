#include<iostream>
#include<cmath>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	cin >> N;

	int start = pow(10, N - 1);
	int end = pow(10, N) - 1;

	for (int num = start; num <= end; ++num) {

		int temp = num;
		int sum = 0;

		while (temp > 0) {
			int digit = temp % 10;
			sum += pow(digit, N);
			temp /= 10;
		}

		if (sum == num) {
			cout << num << endl;
		}
	}

	return 0;
}


