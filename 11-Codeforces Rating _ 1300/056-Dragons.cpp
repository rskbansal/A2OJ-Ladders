//Dragons
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
void solve()
{
  bool ans=1;
  int s,n;
  cin>>s>>n;
  vector<pair<int,int>> v;
  for(int i=0; i<n; i++)
  {
    int x,y;
    cin>>x>>y;
    v.push_back(make_pair(x,y));
  }
  sort(v.begin(),v.end());
  for(int i=0; i<n; i++)
  {
    if(s>v[i].F) s+=v[i].S;
    else
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
  solve();
}