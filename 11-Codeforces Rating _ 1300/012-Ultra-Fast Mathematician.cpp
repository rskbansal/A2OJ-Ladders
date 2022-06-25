//Ultra-Fast Mathematician
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string x,y,s="";
  cin>>x>>y;
  for(int i=0; i<x.size(); i++)
  {
    s+=(x[i]==y[i]?'0':'1');
  }
  cout<<s;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
