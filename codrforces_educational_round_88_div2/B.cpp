#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll sum(vector<char> row, int x, int y) {
    ll ans = 0;
    for (int i = 0; i < row.size(); i++) {
        if (row[i] == '.' && i+1 < row.size() && row[i+1] == '.') {
            if (y < 2*x) {
                ans += y;
                i++;
            }
            else
            {
                ans += 2 * x;
                i++;
            }
        } else if (row[i] == '.') {
            ans = ans + x;
        }
    }
    return ans;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<vector<char>> pave(n, vector<char>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> pave[i][j];
            }
        }
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += sum(pave[i], x, y);
        }
        cout << ans << endl;
    }
    return 0;
}
/*
4
1 1 10 1
.
1 2 10 1
..
2 1 10 1
.
.
3 3 3 7
..*
*..
.*.

*/