#include<iostream>
#include<iomanip>
using namespace std;

int main() {
	ios::sync_with_stdio;
	cin.tie(nullptr);

	int n;
	cin >> n;
	
	double sum = 1.0;
	double term = 1.0;

	for (int k = 1; k <= n; ++k) {
		term /= k;
		sum += term;
	}
	cout << fixed << setprecision(8) << sum << endl;

	return 0;
}
