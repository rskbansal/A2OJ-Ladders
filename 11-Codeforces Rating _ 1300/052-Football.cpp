//Football
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin>>s;
  cout<<(s.find("1111111")!=-1 || s.find("0000000")!=-1?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}