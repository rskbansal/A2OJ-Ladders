//Vanya and Cards
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,temp,sum=0,ans=0;
  cin>>n>>x;
  for(int i=0; i<n; i++)
  {
    cin>>temp;
    sum+=temp;
  }
  sum=abs(sum);
  while(true)
  {
    if(sum>0)
    {
      sum-=x;
      ans++;
    }
    else break;
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}