//Sort the Array
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  int a[n],b[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  sort(b,b+n);
  for(int i=0; i<n; i++)
  {
    if(a[i]==b[i]) a[i]==0;
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}