//Even Odds
#include<bits/stdc++.h>
#define pb push_back
typedef long long ll;
using namespace std;
void solve()
{
  ll n,k;
  cin>>n>>k;
  ll e=n/2,o=n-e;
  if(k<=o) cout<<2*k-1;
  else cout<<2*(k-o);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}