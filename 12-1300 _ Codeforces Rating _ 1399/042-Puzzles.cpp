//Puzzles
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m,ans=996;
  cin>>n>>m;
  int a[m];
  for(int i=0; i<m; i++) cin>>a[i];
  sort(a,a+m);
  for(int i=0; i<=m-n; i++)
  {
    ans=min(a[i+n-1]-a[i],ans);
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}