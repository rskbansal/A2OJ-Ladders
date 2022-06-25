//Xenia and Ringroad
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  ll n,m,t=0;
  cin>>n>>m;
  int a[m];
  cin>>a[0];
  t+=a[0]-1;
  for(int i=1; i<m; i++)
  {
    cin>>a[i];
    if(a[i]>a[i-1]) t+=a[i]-a[i-1];
    if(a[i]<a[i-1]) t+=n-a[i-1]+a[i];
  }
  cout<<t;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}