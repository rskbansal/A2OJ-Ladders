//Comparing Strings
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string a,b;
  bool ans=0;
  cin>>a>>b;
  int count=0;
  vector<int>ind;
  if(a.size()==b.size())
  {
    for(int i=0; i<a.size(); i++)
    {
      if(a[i]!=b[i])
      {
        ind.push_back(i);
        count++;
      }
    }
    if(count==2 && a[ind[0]]==b[ind[1]] && a[ind[1]]==b[ind[0]]) ans=1;
  }
  cout<<(ans?"YES":"NO");
}
 
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}