#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct s {
    int id;
    int ability;
};
int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<s>>players(m + 1);
    for (int i = 1; i <= n; ++i) {
        int gameid, ability;
        cin >> gameid >> ability;
        players[gameid].push_back({ i,ability });
    }
    for (int i = 1; i <= m; ++i) {
        sort(players[i].begin(), players[i].end(),
            [](const s& a, const s& b) {
                if (a.ability != b.ability) { return a.ability > b.ability; }
                return a.id < b.id;
            });
        if (players[i].empty()) {
            cout << -1 << endl;
        }
        else {
            for (size_t j = 0; j < players[i].size(); ++j) {
                if (j > 0) {
                    cout << " ";
                }
                cout << players[i][j].id;
            }
            cout << endl;
        }
    }
    return 0;
}
