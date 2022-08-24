//TL
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  int a[n],b[m];
  for(int i=0; i<n; i++) cin>>a[i];
  for(int i=0; i<m; i++) cin>>b[i];
  int max_a=*max_element(a,a+n);
  int min_a=*min_element(a,a+n);
  int min_b=*min_element(b,b+m);
  if(2*min_a<=max_a && min_b>max_a) cout<<max_a;
  else if(2*min_a>max_a && 2*min_a<min_b) cout<<2*min_a;
  else cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}