//Polo the Penguin and Matrix
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n,m,d,flag=1;
  cin>>n>>m>>d;
  int a[n*m];
  cin>>a[0];
  int rem=a[0]%d;
  for(int i=1; i<n*m; i++)
  {
    cin>>a[i];
    if(a[i]%d!=rem) flag=0;
  }
  if(flag)
  {
    int ans=0;
    sort(a,a+n*m);
    int median=a[(n*m)/2];
    for(int i=0; i<n*m; i++) ans+=abs(median-a[i])/d;
    cout<<ans;
  }
  else cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}