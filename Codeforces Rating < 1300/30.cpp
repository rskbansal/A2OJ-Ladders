//Effective Approach
#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
void solve()
{
  int n,m,x,y;
  ll c1=0,c2=0;
  int a[(int)1e5+1];
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    a[x]=i+1;
  }
  cin>>m;
  for(int i=0; i<m; i++)
  {
    cin>>y;
    c1+=a[y]; 
    c2+=n+1-a[y];
  }
  cout<<c1<<" "<<c2;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}