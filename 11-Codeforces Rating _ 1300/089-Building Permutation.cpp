//Building Permutation
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  ll n,ans=0;
  cin>>n;
  ll a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  sort(a,a+n);
  for(int i=0; i<n; i++) ans+=abs(i+1-a[i]);
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}