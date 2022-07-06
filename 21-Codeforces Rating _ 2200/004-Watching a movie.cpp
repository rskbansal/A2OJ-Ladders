//Watching a movie
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,l,r,prev=1,ans=0;
  cin>>n>>x;
  for(int i=0; i<n; i++)
  {
    cin>>l>>r;
    ans+=(l-prev)%x;
    ans+=(r-l+1);
    prev=r+1;
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}