#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Game {
    int start, end;
    bool operator<(const Game& t)const {
        return end < t.end;
    }
};
signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<Game> times(n);
    for (int i = 0; i < n; ++i) {
        cin >> times[i].start >> times[i].end;
    }
    sort(times.begin(), times.end());
    int count = 0;
    int last_end = -1;
    for (const auto& t : times) {
        if (t.start >= last_end) {
            count++;
            last_end = t.end;
        }
    }
    cout << count << endl;
    return 0;
}
