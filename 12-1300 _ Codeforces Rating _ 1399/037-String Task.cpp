//String Task
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t="";
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
    s[i]=tolower(s[i]);
    if(s[i]!='a'&&s[i]!='e'&&s[i]!='i'&&s[i]!='o'&&s[i]!='u'&&s[i]!='y') t=t+"."+s[i];
  }
  cout<<t;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}