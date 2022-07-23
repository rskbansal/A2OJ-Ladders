//Two Bags of Potatoes
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int y,k,n,ans=0;
  cin>>y>>k>>n;
  for(int i=y/k+1; i<=n/k; i++)
  {
    ans=1;
    cout<<i*k-y<<" ";
  }
  if(!ans) cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}