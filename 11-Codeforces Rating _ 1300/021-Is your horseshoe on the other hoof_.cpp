//Is your horseshoe on the other hoof?
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a,b,c,d;
  cin>>a>>b>>c>>d;
  set<int>s;
  s.insert(a);
  s.insert(b);
  s.insert(c);
  s.insert(d);
  cout<<4-s.size();
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
