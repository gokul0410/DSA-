/*You are given a grid (R × C):

'R' → Rabbit 🐰 (starting point)
'C' → Carrot 🥕 (target)
'.' → Empty path
'#' → Wall (cannot cross)

👉 Rabbit can move in 8 directions:

up, down, left, right
and diagonals also

👉 Each move = 1 step 
*/

#include<bits/stdc++.h>
using namespace std;

int bfs(vector<vector<char>> &grid,int R, int C){
	queue<pair<int,int>>q;
	vector<vector<int>> vis(R,vector<int> (C,0));
	int rabx,raby;
	for(int i=0;i<R;i++){
		for(int j=0;j<C;j++){
			if(grid[i][j]=='R'){
				rabx=i;
				raby=j;
			}
		}
	}
	q.push({rabx,raby});
	vis[rabx][raby]=1;
	
	int steps=0;
	int dir[8][2]={{-1,-1},{-1,0},{1,1},{0,-1},{0,1},{1,-1},{1,0},{-	1,1}};
	while(!q.empty()){
        int size = q.size();

        while(size--){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();

            if(grid[x][y]=='C') return steps;
			
            for(int d=0; d<8; d++){
                int nx = x + dir[d][0];
                int ny = y + dir[d][1];

                if(nx>=0 && ny>=0 && nx<R && ny<C &&
                   !vis[nx][ny] && grid[nx][ny] != '#'){
                    
                    vis[nx][ny] = 1;
                    q.push({nx,ny});
                }
            }
        }
        steps++;
    }
    return -1;
}
int main(){
	int R,C;
	cin>>R>>C;
	vector<vector<char>> grid(R, vector<char>(C));
	for(int row=0;row<R;row++){
		for(int col=0;col<C;col++){
			cin>>grid[row][col];
		}
	}
	cout<<bfs(grid,R,C);
}