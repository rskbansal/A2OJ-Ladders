//Rank List
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k,p,t,ans=0;
  cin>>n>>k;
  vector<pair<int,int>> v;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>p>>t;
    v.push_back({p,50-t});
  }
  sort(v.begin(),v.end(),greater<>());
  for(int i=0; i<n; i++)
  {
    if(v[i]==v[k-1])
    ans++;
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}