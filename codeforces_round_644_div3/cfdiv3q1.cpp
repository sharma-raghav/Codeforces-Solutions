/*
Problem Link - https://codeforces.com/problemset/problem/1360/A  
*/
#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int large = max(a, b);
        int small = min(a, b);

        int length = max(large, 2*small);

        cout << length*length << endl;
    }
    return 0;
}
