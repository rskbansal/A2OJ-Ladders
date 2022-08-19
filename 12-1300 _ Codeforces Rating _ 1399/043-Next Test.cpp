//Next Test
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,i,ind=0;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  sort(a,a+n);
  for(i=0; i<n; i++)
  {
    if(a[i]!=i+1)
    {
      ind=i+1;
      break;
    }
  }
  cout<<(i==n?n+1:ind);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}