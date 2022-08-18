//Little Elephant and Bits
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string a;
  cin>>a;
  int flag=0,n=a.size();
  for(int i=0; i<n; i++)
  {
    if(a[i]=='0')
    {
      a.erase(i,1);
      flag=1;
      break;
    }
  }
  if(!flag) a.erase(0,1);
  cout<<a;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}