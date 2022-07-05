//Lunch Rush
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k,f,t,ans=-INT_MAX;
  cin>>n>>k;
  for(int i=0; i<n; i++)
  {
    cin>>f>>t;
    if(t<k) ans=max(ans,f);
    else ans=max(ans,f-t+k);
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}