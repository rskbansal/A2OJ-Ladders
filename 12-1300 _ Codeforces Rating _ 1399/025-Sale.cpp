//Sale
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m,a[n],sum=0;
  cin>>n>>m;
  for(int i=0; i<n; i++) cin>>a[i];
  sort(a,a+n);
  for(int j=0; j<m; j++)
  {
    if(a[j]<0)
    {
      sum+=a[j];
    }
  }
  cout<<abs(sum);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}