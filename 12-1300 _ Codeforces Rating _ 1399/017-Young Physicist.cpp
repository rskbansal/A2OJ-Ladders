//Young Physicist
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,y,z;
  int sx=0,sy=0,sz=0;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
    cin>>x>>y>>z;
    sx+=x;
    sy+=y;
    sz+=z;
  }
  cout<<((sx==0 && sy==0 && sz==0)?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
