//Word
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int u=0,l=0;
  string s;
  cin>>s;
  for(int i=0; i<s.size(); i++)
  {
    (isupper(s[i])?u++:l++);
  }
  for(int i=0; i<s.size(); i++)
  {
    s[i]=(u>l?toupper(s[i]):tolower(s[i]));
  }
  cout<<s;
}

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
} 