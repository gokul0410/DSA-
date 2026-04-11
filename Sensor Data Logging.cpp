// Problem: B - Sensor Data Logging
// Contest: AtCoder - AtCoder Beginner Contest 453
// URL: https://atcoder.jp/contests/abc453/tasks/abc453_b
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
   int T,X;
   cin>>T>>X;
   vector<int>nums(T+1);
   for(int i=0;i<=T;i++) cin>>nums[i];
   cout<<0<<" "<<nums[0]<<endl;
   int prev=nums[0];
   for(int i=1;i<=T;i++){
   	if(abs(prev-nums[i])>=X){
   	cout<<i<<" "<<nums[i]<<endl;
   	prev=nums[i];
   	}
   }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t; // Toggle this based on problem format
    while (t--) {
        solve();
}
  return 0;
}