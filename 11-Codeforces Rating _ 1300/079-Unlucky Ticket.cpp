//Unlucky Ticket
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,ans=1;
  string s;
  cin>>n>>s;
  sort(s.begin(),s.begin()+n);
  sort(s.begin()+n,s.end());
  if(s[0]<s[n])
  {
    for(int i=1; i<n; i++)
    {
      if(s[i]<s[n+i]) continue;
      else
      {
        ans=0;
        break;
      }
    }
  }
  else if(s[0]>s[n])
  {
    for(int i=1; i<n; i++)
    {
      if(s[i]>s[n+i]) continue;
      else
      {
        ans=0;
        break;
      }
    }
  }
  else ans=0;
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}