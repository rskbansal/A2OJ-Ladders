//Presents
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x;
  cin>>n;
  int a[n+1];
  for(int i=1; i<=n; i++)
  {
    cin>>x;
    a[x]=i;
  }
  for(int i=1; i<=n; i++) cout<<a[i]<<" ";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}