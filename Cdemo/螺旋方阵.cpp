#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int shuzu[10][10] = { 0 };
	int top = 0, bottom = n - 1, left = 0, right = n - 1;
	int num = 1;
	while (top<=bottom&&left<=right) {
		for (int i = left; i <= right; ++i) {
			shuzu[top][i] = num++;
		}
		top++;
		for (int i = top; i <= bottom; ++i) {
			shuzu[i][right] = num++;
		}
		right--;
		if (top <= bottom) {
			for (int i = right; i >= left; --i) {
				shuzu[bottom][i] = num++;
			}
			bottom--;
		}
		if (left <= right) {
			for (int i = bottom; i >= top; --i) {
				shuzu[i][left] = num++;
			}
			left++;
		}
	}
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << setw(3) << shuzu[i][j];
		}
		cout << endl;
	}
	return 0;
}
