//Football
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,gx=1,gy=0;
  string x,y;
  cin>>n;
  string arr[n];
  cin>>arr[0];
  x=arr[0];
  for(int i=1; i<n; i++)
  {
    cin>>arr[i];
    if(arr[i]==arr[0]) gx++;
    else
    {
      y=arr[i];
      gy++;
    }
  }
  cout<<(gx>gy?x:y);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}