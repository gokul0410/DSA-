#include <bits/stdc++.h>
using namespace std;


#define endl '\n'
#define all(v) v.begin(), v.end()
using ll = long long;

void solve() {
    string S1,S2;
    cin>>S1>>S2;
    int R=S1.length(),C=S2.length();
    vector<vector<int>>dp(R+1,vector<int>(C+1,0));
    for(int i=1;i<=R;i++){
    	for(int j=1;j<=C;j++){
    		if(S1[i-1]==S2[j-1]){
    			dp[i][j]=1+dp[i-1][j-1];
    		}
    		else{
    			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
    		}
    	}
    }
    int i=R,j=C;
    string ans="";
    while(i>0 &&j>0){
    	if(S1[i-1]==S2[j-1]){
    		ans+=S1[i-1];
    		i--;
    		j--;
    	}
    	else if(dp[i-1][j]>dp[i][j-1]){
    		i--;
    	}else {
    		j--;
    	}
    }
    reverse(ans.begin(),ans.end());
    cout<<ans;
    
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