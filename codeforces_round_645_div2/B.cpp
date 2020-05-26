#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < arr.size(); i++) {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int ans = 0;
        for (int i = arr.size()-1; i >= 0; i--)
        {
            if (arr[i] <= i+1) {
                ans = i+1;
                break;
            }
        }
        cout << ans + 1 << "\n";
    }
    return 0;
}

/*
4
5
1 1 2 2 1
6
2 3 4 5 6 7
6
1 1 4 5 5 9
5
1 2 3 5 6

6
1
6
4

*/