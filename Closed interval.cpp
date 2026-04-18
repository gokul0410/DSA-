// Problem: A - Closed interval
// Contest: AtCoder - Keysight Technologies Programming Contest（AtCoder Beginner Contest 454）
// URL: https://atcoder.jp/contests/abc454/tasks/abc454_a
// Memory Limit: 1024 MB
// Time Limit: 2000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include <bits/stdc++.h>
using namespace std;


#define endl '\n'
#define all(v) v.begin(), v.end()
using ll = long long;

void solve() {
    int num1,num2;
    cin>>num1>>num2;
	int count=0;
	for(int i=num1;i<=num2;i++)
	count++;
	cout<<count;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    // cin >> t; // Toggle this based on problem format
    while (t--) {
        solve();
    }
    
    return 0;
}