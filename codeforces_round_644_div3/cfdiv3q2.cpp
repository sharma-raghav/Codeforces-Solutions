/*
https://codeforces.com/problemset/problem/1360/B 
*/

#include<bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    scanf("%d", &t);
    while(t--) {
        int n;
        int arr[n];
        scanf("%d", &n);
        for(int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        
        sort(arr, arr+n);

        int s = 0, l = 0;
        long long int mxdiff = 100000000;
        for(int i = 1; i < n; i++) {
            if (arr[i] - arr[i-1] < mxdiff) {
                mxdiff = arr[i] - arr[i-1];
            }
        }
        printf("%d\n", mxdiff);
    }
    return 0;
}
