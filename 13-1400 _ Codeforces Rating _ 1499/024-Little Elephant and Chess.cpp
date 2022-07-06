//Little Elephant and Chess
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  bool ans=1;
  char board[8][8];
  for(int i=0; i<8; i++)
  {
    cin>>board[i][0];
    for(int j=1; j<8; j++)
    {
      cin>>board[i][j];
      if(board[i][j]==board[i][j-1]) ans=0;
    }
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}