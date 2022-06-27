//I_love_%username%
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,count=0;
  cin>>n;
  int arr[n];
  cin>>arr[0];
  int max=arr[0],min=arr[0];
  for(int i=1; i<n; i++)
  {
    cin>>arr[i];  
    if(arr[i]>max)
    {
      max=arr[i];
      count++;
    }
    else if(arr[i]<min)
    {
      min=arr[i];
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
