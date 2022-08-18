//Jzzhu and Sequences
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int x,y,n,ans,MOD=1e9+7;
  cin>>x>>y>>n;
  if(n%3==1) ans=-pow(-1,n)*x;
  else if(n%3==2) ans=pow(-1,n)*y;
  else ans=-pow(-1,n)*(y-x);
  cout<<(ans%MOD+MOD)%MOD;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}