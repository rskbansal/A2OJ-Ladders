//Levko and Table
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;
  cin>>n>>k;
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(i==j) cout<<k<<" ";
      else cout<<"0 ";
    }
    cout<<"\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}