#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int nz = 0, no = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                no++;
            }
            else {
                nz++;
            }
        }
        int dz = 0, dones = 0;
        int ans = INT_MAX;
        for (int i = 0; i < s.size(); i++)
        {

            if (s[i] == '0') {
                dz++;
            }
            else {
                dones++;
            }
            ans = min(ans, min(dz + no - dones, dones + nz - dz));
        }
        cout << ans << endl;
    }
    return 0;
}