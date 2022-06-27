//Pashmak and Flowers
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  ll n,cmin=1,cmax=1;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  sort(a,a+n);
  if(a[0]==a[n-1]) cout<<0<<" "<<n*(n-1)/2;
  else
  {
    for(int i=1; i<n; i++)
    {
      if(a[i]==a[0]) cmin++;
      if(a[n-1-i]==a[n-1]) cmax++;
    }
    cout<<a[n-1]-a[0]<<" "<<cmax*cmin;
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}