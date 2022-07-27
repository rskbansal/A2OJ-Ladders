//Free Cash
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,h,m,ans=0;
  cin>>n;
  map<int,int>time;
  for(int i=0; i<n; i++)
  {
    cin>>h>>m;
    time[h*60+m]++;
  }
  for(int i=0; i<time.size(); i++) ans=max(ans,time[i]);
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}