//Way Too Long Words
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin>>s;
  if(s.size()>10) cout<<s[0]+to_string(s.size()-2)+s.back()<<endl;
  else cout<<s<<endl;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t;
  cin>>t;
  while(t--) solve();
}
