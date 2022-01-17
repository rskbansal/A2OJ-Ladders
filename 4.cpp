//Borze
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s,t="";
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
    if(s[i]=='.')
    {
      t+='0';
    }
    else if(s[i]=='-' && s[i+1]=='.')
    {
      t+='1';
      i++;
    }
    else if(s[i]=='-' && s[i+1]=='-')
    {
      t+='2';
      i++;
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