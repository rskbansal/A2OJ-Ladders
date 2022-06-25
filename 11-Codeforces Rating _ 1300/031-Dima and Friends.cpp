//Dima and Friends
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,sum=0,count=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  for(int x=1; x<=5; x++)
  {
    if((sum+x)%(n+1)!=1)
    {
      count++;
    }
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}