//Magic Numbers
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string n;
  bool m=1;
  cin>>n;
  for(int i=0; i<n.size(); i++)
  {
    if(n[i]=='1' && n[i+1]=='4' && n[i+2]=='4') i+=2;
    else if(n[i]=='1' && n[i+1]=='4') i++;
    else if(n[i]=='1') continue;
    else
    {
      m=0;
      break;
    }
  }
  cout<<(m?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}