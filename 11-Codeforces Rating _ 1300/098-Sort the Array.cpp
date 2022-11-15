#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,s,e;
  cin>>n;
  int a[n],compare[n];
  for(int i=0; i<n; i++) cin>>a[i];
  copy(a,a+n,compare);
  sort(compare,compare+n);
  if(equal(a,a+n,compare,compare+n)) cout<<"yes\n1 1";
  else
  {
    for(int i=0; i<n; i++)
    {
      if(a[i]!=compare[i])
      {
        s=i;
        break;
      }
    }
    for(int i=n-1; i>=0; i--)
    {
      if(a[i]!=compare[i])
      {
        e=i;
        break;
      }
    }
    reverse(a+s,a+e+1);
    if(equal(a,a+n,compare,compare+n)) cout<<"yes\n"<<s+1<<" "<<e+1;
    else cout<<"no";
  }
}
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}