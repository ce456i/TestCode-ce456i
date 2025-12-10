#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    int yanghui[10][10] = { 0 };
    for (int i = 0; i < n; ++i) {
        yanghui[i][0] = 1;
        yanghui[i][i] = 1;
        for (int j = 1; j < i; ++j) {
            yanghui[i][j] = yanghui[i - 1][j - 1] + yanghui[i - 1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << string((n - i - 1) * 2, ' ');
        for (int j = 0; j <= i; ++j) {
            cout << setw(4) << yanghui[i][j];
        }
        cout << endl;
    }
    return 0;
}
