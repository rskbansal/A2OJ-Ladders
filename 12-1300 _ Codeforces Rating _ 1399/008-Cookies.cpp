//Cookies
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n,x,codd=0;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>x;
    if(x%2==1) codd++;
  }
  cout<<(codd%2==0?n-codd:codd);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}