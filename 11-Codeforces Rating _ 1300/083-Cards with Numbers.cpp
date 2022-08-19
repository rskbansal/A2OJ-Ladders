//Cards with Numbers
#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
#define F first
#define S second
using namespace std;
void solve()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n,x,ans=1;
  cin>>n;
  vector<pair<int,int>>v;
  for(int i=1; i<=2*n; i++)
  {
    cin>>x;
    v.push_back({x,i});
  }
  sort(all(v));
  for(int i=0; i<2*n; i+=2)
  {
    if(v[i].F!=v[i+1].F)
    {
      ans=0;
      cout<<-1;
      break;
    }
  }
  if(ans)
  {
    for(int i=0; i<2*n; i+=2)
    {
      cout<<v[i].S<<" "<<v[i+1].S<<"\n";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}