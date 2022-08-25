//IQ Test
#include<bits/stdc++.h>
using namespace std;
const int dir_i[4]={0,-1,0,1};
const int dir_j[4]={-1,0,1,0};
void solve()
{
  bool ans=0;
  char a[4][4];
  for(auto x:a) cin>>x;
  for(int i=0; i<4; i++)
  {
    for(int j=0; j<4; j++)
    {
      for(int k=0; k<3; k++)
      {
        if(i+dir_i[k]>=0 && j+dir_j[k]>=0 && i+dir_i[k]<4 && j+dir_j[k]<4)
        if(a[i+dir_i[k]][j+dir_j[k]]==a[i][j])
        if(i+dir_i[k+1]>=0 && j+dir_j[k+1]>=0 && i+dir_i[k+1]<4 && j+dir_j[k+1]<4)
        if(a[i+dir_i[k+1]][j+dir_j[k+1]]==a[i][j])
        ans=1;
      }
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