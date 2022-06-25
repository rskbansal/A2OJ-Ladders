//Bicycle Chain
#include<bits/stdc++.h>
#define all(c) (c).begin(),(c).end()
using namespace std;
void solve()
{
  int n,m;
  vector<int> g;
  cin>>n;
  vector<int> a(n);
  for(int x=0; x<n; x++) cin>>a[x];
  cin>>m;
  vector<int> b(m);
  for(int y=0; y<m; y++) cin>>b[y];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<m; j++)
    {
      if(b[j]%a[i]==0) g.push_back(b[j]/a[i]);
    }
  }
  sort(all(g));
  int ind=max_element(all(g))-g.begin();
  cout<<g.size()-ind;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}