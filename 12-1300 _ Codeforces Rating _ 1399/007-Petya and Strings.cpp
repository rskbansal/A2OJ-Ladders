//Petya and Strings
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string a,b;
  cin>>a>>b;
  for(int i=0; i<a.size(); i++)
  {
    a[i]=tolower(a[i]);
    b[i]=tolower(b[i]);
  }
  if(a==b) cout<<0;
  else if(a>b) cout<<1;
  else cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
