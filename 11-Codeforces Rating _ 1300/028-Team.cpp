//Team
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,count=0;
  cin>>n;
  int arr[n][3];
  for(int i=0; i<n; i++)
  {
    int temp=0;
    for(int j=0; j<3; j++)
    {
      cin>>arr[i][j];
      if(arr[i][j]==1) temp++;
    }
    if(temp>=2) count++;
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
