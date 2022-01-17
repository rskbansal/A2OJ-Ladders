//HQ9+
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string p;
  bool ans=0;
  getline(cin,p);
  for(int i=0; i<p.size(); i++)
  {
    if(p[i]=='H' || p[i]=='Q' || p[i]=='9')
    {
      ans=1;
      break;
    }
  }
  cout<<(ans?"YES":"NO");
}

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}