//Permutation
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,j,ans=0;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  for(int i=1; i<=n; i++)
  {
    for(j=0; j<n; j++)
    {
      if(a[j]==i) break;
    }
    if(j==n) ans++;
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}