//The Fibonacci Segment
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n;
  cin>>n;
  int a[n];
  for(int i=0; i<n; i++) cin>>a[i];
  int ans=(n==1?1:2);
  int cnt=(n==1?1:2);
  for(int i=2; i<n; i++)
  {
    if(a[i]==a[i-1]+a[i-2]) cnt++;
    else
    {
      ans=max(ans,cnt);
      cnt=2;
    }
  }
  ans=max(ans,cnt);
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}