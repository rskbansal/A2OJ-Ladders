//Fancy Fence
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a;
  cin>>a;
  cout<<(360%(180-a)==0?"YES":"NO")<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) solve();
}