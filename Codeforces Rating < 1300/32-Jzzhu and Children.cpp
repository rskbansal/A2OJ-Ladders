//Jzzhu and Children
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  vector<int> a(n),indc(n),count(n,0);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    indc[i]=i+1;
  } 
  while(a.size()>1)
  {
    if(m+count[0]>=a[0])
    {
      a.erase(a.begin());
      indc.erase(indc.begin());
      count.erase(count.begin());
    }
    else
    {
      a.push_back(a[0]);
      a.erase(a.begin());
      indc.push_back(indc[0]);
      indc.erase(indc.begin());
      count[0]+=m;
      count.push_back(count[0]);
      count.erase(count.begin());
    }
  }
  cout<<indc[0];
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}