//Sereja and Bottles
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,count=0;
  cin>>n;
  int a[n],b[n];
  for(int i=0; i<n; i++) cin>>a[i]>>b[i];
  for(int i=0; i<n; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(a[i]==b[j] && i!=j)
      {
        a[i]=-1;
        count++;
      }
    }
  }
  cout<<n-count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}