/*
Problem Link - https://codeforces.com/problemset/problem/1360/C
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int arr[n];
        vector<int> even, odd;
        
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i]&1) {
                odd.push_back(arr[i]);
            } else {
                even.push_back(arr[i]);
            }
        }
        bool keeponrunning = true;
        if (odd.size()%2 == 0 && even.size()%2 == 0) {
            cout << "YES\n";
            continue;
        } else {
            for(int i = 0; i < even.size() && keeponrunning; i++) {
                for(int j = 0; j < odd.size() && keeponrunning; j++) {
                    if (abs(even[i] - odd[j]) == 1) {
                        keeponrunning = false;
                    }   
                }
            }
        }
        if (!keeponrunning) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
