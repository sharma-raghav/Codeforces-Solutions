#include <bits/stdc++.h>
using namespace std;
/*
Problem Link - https://codeforces.com/problemset/problem/1360/E
*/
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n][n];
        for(int i = 0; i < n; i++) {
            string aux;
            cin >> aux;
            for(int j = 0; j < n; j++) {
                arr[i][j] = (aux[j] == '1')?1:0;
            }
        }
        bool ans = true;
        for(int i = n-2; i >= 0 && ans; i--) {
            for(int j = n-2; j >= 0 && ans; j--) {
                if (arr[i][j] == 1) {
                    if (arr[i+1][j] == 0 && arr[i][j+1] == 0) {
                         ans = false;
                    }
                }
            }
        }
        if (!ans) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}