//The number of positions
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,a,b;
  cin>>n>>a>>b;
  cout<<(b>=n-a-1?n-a:b+1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}