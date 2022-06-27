//Arrival of the General
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,a,b,t=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
  }
  a=max_element(arr,arr+n)-arr;
  reverse(arr,arr+n);
  b=min_element(arr,arr+n)-arr;
  cout<<a+b-((n-1-b)<a?1:0);
}


int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
