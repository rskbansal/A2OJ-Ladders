//Jeff and Periods
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
void solve()
{
  int n,x,count=0;
  cin>>n;
  map<int,vector<int>> m;
  vector<pair<int,int>> ans;
  for(int i=1; i<=n; i++)
  {
    cin>>x;
    m[x].push_back(i);
  }
  for(auto i:m)
  {
    if(i.S.size()==1)
    {
      count++;
      ans.push_back({i.F,0});
    }
    else if(i.S.size()==2)
    {
      count++;
      ans.push_back({i.F,i.S[1]-i.S[0]});
    }
    else
    {
      int flag=1,cd=i.S[1]-i.S[0];
      for(int j=2; j<i.S.size(); j++)
      {
        if(i.S[j]-i.S[j-1]!=cd)
        {
          flag=0;
          break;
        }
      }
      if(flag)
      {
        count++;
        ans.push_back({i.F,cd});
      }
    }
  }
  cout<<count<<"\n";
  for(auto i:ans) cout<<i.F<<" "<<i.S<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}