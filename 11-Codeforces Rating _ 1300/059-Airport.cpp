//Airport
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n,m,max=0,min=0;
  cin>>n>>m;
  int z=n;
  int a[m],b[m];
  for(int i=0;i<m; i++)
  {
    cin>>a[i];
    b[i]=a[i];
  }
  while(n)
  {
    sort(a,a+m,greater<>());
    max+=a[0];
    a[0]--;
    n--;
  }
  sort(b,b+m);
  for(int i=0; i<m; i++)
  {
    while(b[i] && z)
    { 
      min+=b[i];
      b[i]--;
      z--;
    }
  }
  cout<<max<<" "<<min<<"\n";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}