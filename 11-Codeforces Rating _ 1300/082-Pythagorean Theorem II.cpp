//Pythagorean Theorem II
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  ld n,ans=0;
  cin>>n;
  for(int a=1; a<=n; a++)
  {
    for(int b=a; b<=n; b++)
    {
      ld temp=sqrt(a*a+b*b);
      if(abs(remainder(temp,1))<1e-9 && temp<=n) ans++;
    }
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}