//Nearly Lucky Number
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int count=0,ans=1;
  string n,s;
  cin>>n;
  for(int i=0; i<n.size(); i++)
  {
    if(n[i]=='4' || n[i]=='7') count++;
  }
  s=to_string(count);
  count=0;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]!='4' && s[i]!='7')
    {
      ans=0;
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
