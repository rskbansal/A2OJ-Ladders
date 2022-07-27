//T-primes
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
bool isPrime(ll x)
{
  if(x==1) return 0;
  else
  {
    for(int i=2; i<=sqrt(x); i++)
    {
      if(x%i==0)
      return 0;
    }
  }
  return 1;
}

void solve()
{
  ld x;
  cin>>x;
  if(remainder(sqrt(x),1)==0 && isPrime(sqrt(x))) cout<<"YES\n";
  else cout<<"NO\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin>>n;
  while(n--) solve();
}