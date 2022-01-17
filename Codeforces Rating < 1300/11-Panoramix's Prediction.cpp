//Panoramix's Prediction
#include<bits/stdc++.h>
using namespace std;
void solve(int n, int m)
{
  bool ans=1;
  for(int x=n+1; x<m; x++)
  {
    bool prime=1;
    for(int y=2; y<=x/2; y++)
    {
      if(x%y==0)
      {
        prime=0;
        break;
      }
    }
    if(prime)
    {
      ans=0;
      break;
    }
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n,m,cont=1;
  cin>>n>>m;
  for(int x=2; x<=m/2; x++)
  {
    if(m%x==0)
    {
      cout<<"NO";
      cont=0;
      break;
    }
  }
  if(cont) solve(n,m);
}
