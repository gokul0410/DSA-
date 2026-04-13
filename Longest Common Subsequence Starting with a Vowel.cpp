//Question Longest Common Subsequence Starting with a Vowel
#include <bits/stdc++.h>
using namespace std;


#define endl '\n'
#define all(v) v.begin(), v.end()
using ll = long long;

bool vowels(char ch){
	if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'){
		return true;
	}
	return false;
}
void LCS(string S1,string S2,vector<vector<int>>&dp){
	int R=S1.length(),C=S2.length();
	for(int row=R-1;row>=0;row--){
		for(int col=C-1;col>=0;col--){
			if(S1[row]==S2[col]){
				dp[row][col]=dp[row+1][col+1]+1;
			}else{
				dp[row][col]=max(dp[row+1][col],dp[row][col+1]);
				
			}
		}
	}
	
}

void solve() {
    string S1,S2;
    cin>>S1>>S2;
    int R=S1.length(),C=S2.length();
    vector<vector<int>>dp(R+1,vector<int>(C+1,0));
    LCS(S1,S2,dp);
    int ans=0;
    for(int row=0;row<R;row++){
    	for(int col=0;col<C;col++){
    		if(S1[row]==S2[col] && vowels(S1[row])){
    			ans=max(ans,1+dp[row+1][col+1]); // this is my it is forced to st from there 
    		}
    	}
    }
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