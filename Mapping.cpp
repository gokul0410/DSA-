// Problem: B - Mapping
// Contest: AtCoder - Keysight Technologies Programming Contest（AtCoder Beginner Contest 454）
// URL: https://atcoder.jp/contests/abc454/tasks/abc454_b
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
	int N,M;
	cin>>N>>M;
	vector<int>nums(N);
	for(int i=0;i<N;i++) cin>>nums[i];
	set<int>s(nums.begin(),nums.end());
	if(s.size()==N) cout<<"Yes"<<endl;
	else cout<<"No"<<endl;
	
	if(s.size()==M) cout<<"Yes"<<endl;
	else cout<<"No";
    
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