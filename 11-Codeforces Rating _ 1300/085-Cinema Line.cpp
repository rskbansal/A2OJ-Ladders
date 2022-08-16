#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,c25=0,c50=0,ans=1;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    if(x==25) c25++;
    if(x==50)
    {
      if(c25>0)
      {
        c50++;
        c25--;
      }
      else
      {
        ans=0;
        break;
      }
    }
    if(x==100)
    {
      if(c50>0 && c25>0)
      {
        c25--;
        c50--;
      }
      else if(c25>2) c25-=3;
      else
      {
        ans=0;
        break;
      }
    }
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}