#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,a,b,c,ans=0;
  cin>>n>>a>>b>>c;
  for(int i=0; i<=n/a; i++)
  {
    for(int j=0; j<=n/b; j++)
    {
      if((n-i*a-j*b)%c==0 && n-i*a-j*b>=0)
      {
        int k=(n-i*a-j*b)/c;
        ans=max(ans,i+j+k);
        if(ans==4666)
        cout<<i<<" "<<j<<" "<<k;
      }
    }
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}