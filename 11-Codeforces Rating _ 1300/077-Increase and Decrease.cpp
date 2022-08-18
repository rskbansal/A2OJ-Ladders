//Increase and Decrease
#include<bits/stdc++.h>
typedef long long ll;
typedef long double ld;
using namespace std;
void solve()
{
  int n,x;
  ld sum=0;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    sum+=x;
  }
  cout<<(!remainder(sum/n,1)?n:n-1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}