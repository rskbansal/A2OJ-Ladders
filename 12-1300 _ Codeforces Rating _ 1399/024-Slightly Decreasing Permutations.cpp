//Slightly Decreasing Permutations
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;
  cin>>n>>k;
  for(int i=n; i>n-k; i--) cout<<i<<" ";
  for(int i=1; i<=n-k; i++) cout<<i<<" ";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}