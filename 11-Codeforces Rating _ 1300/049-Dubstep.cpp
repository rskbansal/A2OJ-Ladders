//Dubstep
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t="";
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B') i+=2;
    else
    {
      t+=s[i];
      if(s[i+1]=='W' && s[i+2]=='U' && s[i+3]=='B') t+=" ";
    }
  }
  cout<<t;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}