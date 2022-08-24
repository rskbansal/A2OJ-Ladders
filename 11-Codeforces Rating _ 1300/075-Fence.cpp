//Fence
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k,h,ans,temp=INT_MAX;
  cin>>n>>k;
  int cum[n+1];
  for(int i=1; i<=n; i++)
  {
    cin>>h;
    cum[i]=cum[i-1]+h;
  }
  for(int i=1; i<=n-k+1; i++)
  {
    if(cum[i+k-1]-cum[i-1]<temp)
    {
      temp=cum[i+k-1]-cum[i-1];
      ans=i;
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