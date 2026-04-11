// Problem: A - Trimo
// Contest: AtCoder - AtCoder Beginner Contest 453
// URL: https://atcoder.jp/contests/abc453/tasks/abc453_a
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
    int N;
    string S;
    cin>>N>>S;
    string str="";
    bool flag=false;
    if(S[0]=='o') flag=true; 
    for(int i=0;i<N;i++){
    	if(flag && S[i]=='o') continue;
    	else if(S[i]!='o') flag=false;
    	if(flag==false) str+=S[i];
    }
    cout<<str;
    
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