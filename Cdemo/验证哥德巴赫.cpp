#include <iostream>
#include <cmath>
using namespace std;

bool p(long long x) {
	if (x < 2)return false;
	if (x == 2)return true;
	if (x % 2 == 0)return false;
	for (long long i=3; i <= sqrt(x); i += 2) {
		if (x % i == 0)return false;
	}
	return true;
}

int main() {
	long long n;
	cin >> n;

	for (long long a=2; a <= n / 2; ++a) {
		if (p(a)) {
			long long b;
			b = n - a;
			if (p(b)) {
				cout << n << "="<< a << "+" << b << endl;
				return 0;
			}
		}
	}
	return 0;
}
