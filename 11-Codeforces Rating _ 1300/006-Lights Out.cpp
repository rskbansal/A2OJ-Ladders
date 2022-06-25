//Lights Out
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int ans[3][3]={1,1,1,1,1,1,1,1,1};
  int input[3][3];
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cin>>input[i][j];
      if(input[i][j]%2==1)
      {
        ans[i][j]=1-ans[i][j];
        if(i-1>=0) ans[i-1][j]=1-ans[i-1][j];
        if(j-1>=0) ans[i][j-1]=1-ans[i][j-1];
        if(i+1<=2) ans[i+1][j]=1-ans[i+1][j];
        if(j+1<=2) ans[i][j+1]=1-ans[i][j+1];
      }
    }
  }
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      cout<<ans[i][j];
    }
    cout<<"\n";
  }
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
