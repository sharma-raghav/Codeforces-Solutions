#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, m, k;
        cin >> n >> m >> k;
        if (m == 0) {
            cout << 0 << endl;
            continue;
        } else {
            int eachp = n / k;
            if (eachp >= m) {
                cout << m << endl;
                continue;
            } else {
                int leftjokers = m - eachp;
                if (leftjokers%(k-1) == 0) {
                    cout << eachp - leftjokers / (k - 1) << endl;
                }
                else
                {
                    cout << eachp - leftjokers / (k - 1) - 1 << endl;
                }
            }
        }
    }
    return 0;
}