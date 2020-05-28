#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int ans = 0;
        for (int i = 30; i >= -30; i--)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[j] > i) {
                    sum = 0;
                } else {
                    ans = max(ans, sum + arr[j] - i);
                    sum = max(0, sum + arr[j]);
                }
            }
        }
        cout << ans << endl;
        return 0;
}