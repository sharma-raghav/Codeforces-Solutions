#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, x;
        cin >> n >> x;
        vector<int> odd, even;
        for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            if (ele & 1)
            {
                odd.push_back(ele);
            }
            else
            {
                even.push_back(ele);
            }
        }
        int ev = even.size();
        int os = odd.size();

        int i = 1;
        int prev = 0;
        while (i <= min(os, x))
        {
            prev = i;
            i += 2;
        }
        if (ev >= x - prev && prev!=0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

// 6 ---> 3 3 

//odd + even == > odd

/*
5
1 1
999
1 1
1000
2 1
51 50
2 2
51 50
3 3
101 102 103

*/