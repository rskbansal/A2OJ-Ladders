//Blackjack
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n;
  cin>>n;
  int req=n-10;
  if((req>=1 && req<=9) || req==11) cout<<4;
  else if(req==10) cout<<15;
  else cout<<0;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}