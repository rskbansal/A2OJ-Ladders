//Kitahara Haruki's Gift
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,c100=0,c200=0,sum=0,ans=0;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    sum+=x;
    if(x==100) c100++;
  }
  c200=n-c100;
  for(int i=0; i<=c100; i++)
  {
    for(int j=0; j<=c200; j++)
    {
      if((i*100+j*200)==sum/2)
      {
        ans=1;
        break;
      }
    }
    if(ans) break;
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}