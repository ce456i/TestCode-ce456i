#include<iostream>
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int a[6][6] = { 0 };
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    bool found = false;
    int h, l;
    for (int i = 0; i < n; ++i) {
        int max_val = a[i][0];
        for (int j = 1; j < n; j++) {
            if (a[i][j] > max_val) {
                max_val = a[i][j];
            }
        }
        for (int j = 0; j < n; j++) {
            if (a[i][j] != max_val) {
                continue;
            }
            bool ismin = true;
            for (int k = 0; k < n; ++k) {
                if (a[k][j] < max_val) {
                    ismin = false;
                    break;
                }
            }
            if (ismin) {
                h = i;
                l = j;
                found = true;
                goto end;
            }
        }
    }
end:
    if (found) {
        cout << h << " " << l << endl;
    }
    else {
        cout << "NONE" << endl;
    }
    return 0;
}
