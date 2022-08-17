//Kuriyama Mirai's Stones
#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void solve()
{
  ll n,m,type,l,r;
  cin>>n;
  ll a[n+1]={0},b[n+1]={0};
  for(int i=1; i<=n; i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b,b+n+1);
  for(int i=1; i<=n; i++)
  {
    a[i]+=a[i-1];
    b[i]+=b[i-1];
  }
  cin>>m;
  for(int i=0; i<m; i++)
  {
    cin>>type>>l>>r;
    if(type==1) cout<<a[r]-a[l-1];
    else cout<<b[r]-b[l-1];
    cout<<"\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}