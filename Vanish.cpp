// Problem: C - Vanish
// Contest: AtCoder - Ｓｋｙ Inc, Programming Contest 2026 (AtCoder Beginner Contest 455)
// URL: https://atcoder.jp/contests/abc455/tasks/abc455_c
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
   int N,K;
   cin>>N>>K;
   vector<int>nums(N);
   long long total=0;
   for(int i=0;i<N;i++){
   	cin>>nums[i];
   	total+=nums[i];
   }
   unordered_map<int,long long>mp;
   for(int i=0;i<N;i++){
   		mp[nums[i]]++;
   }
   vector<long long>arr;
   for(auto &m :mp){
   		arr.push_back(1LL*m.first*m.second);
   }
   sort(arr.rbegin(),arr.rend());
   for(int i=0;i<K && i<(int)arr.size();i++){
   	total-=arr[i];
   }
   cout<<total;
   
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