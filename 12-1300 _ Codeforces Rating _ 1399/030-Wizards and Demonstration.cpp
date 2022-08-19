//Wizards and Demonstration
#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void solve()
{
  ld n,x,y;
  cin>>n>>x>>y;
  if(n*y/100>=x) cout<<ceil(n*y/100)-x;
  else cout<<0;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}