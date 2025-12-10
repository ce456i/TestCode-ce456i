#include<iostream>
#include<vector>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>>zz(m, vector<int>(n));
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> zz[i][j];
        }
    }
    vector<vector<int>>maxvalue;
    for (int i = 1; i < m - 1; ++i) {
        for (int j = 1; j < n - 1; ++j) {
            int current = zz[i][j];
            int up = zz[i - 1][j];
            int down = zz[i + 1][j];
            int left = zz[i][j - 1];
            int right = zz[i][j + 1];
            if (current > up && current > down && current > left && current > right) {
                maxvalue.push_back({ current,i + 1,j + 1 });
            }
        }
    }
    if (!maxvalue.empty()) {
        for (auto& val : maxvalue) {
            cout << val[0] << " " << val[1] << " " << val[2] << endl;
        }
    }
    else {
        cout << "None" << " " << m << " " << n << endl;
    }
    return 0;
}
