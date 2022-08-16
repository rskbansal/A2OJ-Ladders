//Appleman and Card Game
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  ll n,k,ans=0;
  string s;
  cin>>n>>k>>s;
  ll a[26]={0};
  for(int i=0; i<n; i++) a[(int)s[i]-65]++;
  sort(a,a+26,greater<int>());
  for(int i=0; i<26; i++)
  { 
    if(k<a[i] && k>0)
    {
      ans+=k*k;
      k=0;
    }
    else if(k>=a[i] && k>0)
    {
      ans+=a[i]*a[i];
      k-=a[i];
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