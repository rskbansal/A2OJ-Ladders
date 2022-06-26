//Chat room
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int ind=0,ans=1,j;
  string s,t="hello";
  cin>>s;
  for(int i=0; i<5; i++)
  {
    for(j=ind; j<s.size(); j++)
    {
      if(s[j]==t[i])
      {
        ind=j+1;
        break;
      }
    }
    if (j==s.size())
    {
      ans=0;
      break;
    }
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  solve();
}