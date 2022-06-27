//Candy Bags
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  for(int i=1; i<=n*n/2; i++) cout<<i<<" "<<n*n+1-i<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}