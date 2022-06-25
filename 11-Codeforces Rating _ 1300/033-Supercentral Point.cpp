//Supercentral Point
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,count=0;
  cin>>n;
  int a[n][2];
  for(int i=0; i<n; i++)
  {
    cin>>a[i][0]>>a[i][1];
  }
  for(int i=0; i<n; i++)
  {
    bool low=0,up=0,r=0,l=0;
    for(int j=0; j<n; j++)
    {
      if(a[j][0]==a[i][0] && a[j][1]<a[i][1]) low=1;
      else if(a[j][0]==a[i][0] && a[j][1]>a[i][1]) up=1;
      else if(a[j][0]>a[i][0] && a[j][1]==a[i][1]) r=1;
      else if(a[j][0]<a[i][0] && a[j][1]==a[i][1]) l=1;
    }
    if(low==1 && up==1 && r==1 && l==1) count++;
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}