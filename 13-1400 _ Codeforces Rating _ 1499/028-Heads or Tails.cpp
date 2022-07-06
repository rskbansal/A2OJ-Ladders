// /Heads or Tails
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int x,y,a,b,ans=0;
  cin>>x>>y>>a>>b;
  for(int i=a; i<=x; i++)
  {
    for(int j=b; j<=y && j<i; j++)
    {
      ans++;
    }
  }
  cout<<ans<<"\n";
  for(int i=a; i<=x; i++)
  {
    for(int j=b; j<=y && j<i; j++)
    {
      cout<<i<<" "<<j<<"\n";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}