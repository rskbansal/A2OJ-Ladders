//Lucky Division
#include<bits/stdc++.h>
using namespace std;
bool isLucky(string x)
{
  for(int i=0; i<x.size(); i++)
  {
    if(x[i]!='7' && x[i]!='4')
    return 0;
  }
  return 1;
}

void solve()
{
  int n;
  cin>>n;
  if(isLucky(to_string(n))) cout<<"YES";
  else
  {
    bool ans=0;
    for(int i=2; i<=n/2; i++)
    {
      if(n%i==0 && isLucky(to_string(i)))
      {
        ans=1;
        break;
      }
    }
    cout<<(ans?"YES":"NO");
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}