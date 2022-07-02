//Chips
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  bool ans=1;
  int n,m;
  cin>>n>>m;
  while(true)
  {
    for(int i=1; i<=n; i++)
    {
      if(m>=i) m-=i;
      else
      {
        ans=0;
        break;
      }
    }
    if(ans==0) break;
  }
  cout<<m;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}