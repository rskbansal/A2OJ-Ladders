//Choosing Teams
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k,x,ans=0;
  cin>>n>>k;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>x;
    if(5-x>=k) ans++;
  }
  cout<<ans/3;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}