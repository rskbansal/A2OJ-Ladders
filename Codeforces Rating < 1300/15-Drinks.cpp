//Drinks
#include<bits/stdc++.h>
typedef long double ld;
using namespace std;
void solve()
{
  int n,sum=0;
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    sum+=arr[i];
  }
  cout<<fixed<<setprecision(12)<<(ld) sum/n;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
