#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        ll x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;

        ll vt = x2 - x1;
        ll ht = y2 - y1;

        ll n = ht + vt;
        cout << (x2-x1)*(y2-y1) + 1 << "\n";
    }
    return 0;
}

/*
4
1 1 2 2
1 2 2 4
179 1 179 100000
5 7 5 7

2
3
1
1
*/