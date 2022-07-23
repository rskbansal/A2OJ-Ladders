//DZY Loves Chessboard
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  char board[n][m];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      cin>>board[i][j];
      if(board[i][j]=='.' && (i+j)%2==0) board[i][j]='B';
      if(board[i][j]=='.' && (i+j)%2==1) board[i][j]='W';
      cout<<board[i][j];
    }
    cout<<"\n";
  }

}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}