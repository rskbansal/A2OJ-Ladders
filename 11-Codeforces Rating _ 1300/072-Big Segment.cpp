//Big Segment
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,max_point=0,min_point=INT_MAX,ans=0;
  cin>>n;
  int l[n],r[n];
  for(int i=0; i<n; i++)
  {
    cin>>l[i]>>r[i];
    min_point=min(min_point,l[i]);
    max_point=max(max_point,r[i]);
  }
  for(int i=0; i<n; i++)
  {
    if(l[i]==min_point && r[i]==max_point)
    ans=i+1;
  }
  cout<<(ans?ans:-1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}