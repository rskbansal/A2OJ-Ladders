//Dividing Orange
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,k;
  cin>>n>>k;
  int ref[n*k];
  for(int i=0; i<n*k; i++) ref[i]=i+1;
  int a[k];
  for(int i=0; i<k; i++)
  {
    cin>>a[i];
    ref[a[i]-1]=0;
  }
  for(int i=0; i<k; i++)
  {
    int count=0;
    cout<<a[i]<<" ";
    for(int j=0; j<n*k; j++)
    {
      if(ref[j] && count<n-1)
      {
        cout<<ref[j]<<" ";
        ref[j]=0;
        count++;
      }
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