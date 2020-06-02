#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        if (n == 1) {
            cout << "Ayush" << endl;
            continue;
        }
        vector<int> deg(n + 1);
        for (int i = 0; i < n - 1; i++) {
            int u, v;
            cin >> u >> v;
            deg[u]++;
            deg[v]++;
        }

        if (deg[x] == 1) {
            cout << "Ayush" << endl;
        } else {
            if (n&1) {
                cout << "Ashish\n";
            }
            else {
                cout << "Ayush\n";
            }
        }
    }
    return 0;
}