#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m;
        cin >> n >> m;
        long long int ans = (n / 2) * m;
        if (n&1) {
            if (m&1) {
                ans = ans + m / 2 + 1;
            }
            else {
                ans = ans + m / 2;
            }
        }
        if (ans <= 0) {
            ans = 1;
        }
        cout << ans << endl;
    }
    return 0;
}

/*
5
1 1
1 3
2 2
3 3
5 3

1
2
2
5
8

*/