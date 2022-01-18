//Petr and Book
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m=0,sum=0;
  cin>>n;
  int arr[7];
  for(int i=0; i<7; i++)
  {
    cin>>arr[i];
  }
  while(m!=-1)
  {
    for(int j=0; j<7; j++)
    {
      sum+=arr[j];
      if(sum>=n)
      {
        cout<<j+1;
        m=-1;
        break;
      }
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}