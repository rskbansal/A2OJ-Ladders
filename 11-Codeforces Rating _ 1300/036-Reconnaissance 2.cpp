//Reconnaissance 2
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,ans=1000,x,y;
  cin>>n;
  int a[n];
  cin>>a[0];
  for(int i=1; i<n; i++)
  {
    cin>>a[i];
    if(abs(a[i]-a[i-1])<ans)
    {
      ans=abs(a[i]-a[i-1]);
      x=i+1;
      y=i;
    }
  }
  if(abs(a[n-1]-a[0])<ans) x=n,y=1;
  cout<<x<<" "<<y;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}