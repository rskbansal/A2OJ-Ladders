//Tram
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,p=0,temp=0;
  cin>>n;
  int arr[n][2];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i][0]>>arr[i][1];
    temp=temp-arr[i][0]+arr[i][1];
    if(temp>p)
    {
      p=temp;
    }
  }
  cout<<p;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}