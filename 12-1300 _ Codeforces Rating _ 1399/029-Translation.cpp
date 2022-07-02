//Translation
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t;
  cin>>s>>t;
  reverse(s.begin(),s.end());
  cout<<(s==t?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}