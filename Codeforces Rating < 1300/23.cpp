//Boy or Girl
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string t;
  set<char> s;
  cin>>t;
  for(int i=0; i<t.size(); i++)
  {
    s.insert(t[i]);
  }
  if(s.size()%2==0) cout<<"CHAT WITH HER!";
  else cout<<"IGNORE HIM!";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}