#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long int n, k;

        cin >> n >> k;

        long long i = 1;
        long long ans = 1000000007; 
        vector<long long int> divs;
        for(i = 1; i*i <= n; i++) {
            if (n%i == 0) {
                if (ans > n/i && i <= k) {
                    ans = n/i;
                }
                if (n/i <= k && ans > i) {
                    ans = i;
                }
                // cout << i << " " << n/i << endl;
            }
        }
        cout << ans << endl;
    }
    return 0;
}