//Parallelepiped
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  ll a1,a2,a3;
  cin>>a1>>a2>>a3;
  ll vol=sqrt(a1*a2*a3);
  ll l=vol/a1,b=vol/a2,h=vol/a3;
  cout<<4*(l+b+h);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}