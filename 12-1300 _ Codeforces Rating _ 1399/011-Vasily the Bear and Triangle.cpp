//Vasily the Bear and Triangle
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  ll x,y;
  cin>>x>>y;
  int ans=abs(x)+abs(y);
  if(x>0 && y>0) cout<<"0 "<<ans<<" "<<ans<<" 0";
  if(x>0 && y<0) cout<<"0 "<<-ans<<" "<<ans<<" 0";
  if(x<0 && y>0) cout<<-ans<<" 0 0 "<<ans;
  if(x<0 && y<0) cout<<-ans<<" 0 0 "<<-ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}