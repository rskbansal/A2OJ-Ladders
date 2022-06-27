//Shooshuns and Sequence
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int n,k,check=1;
  cin>>n>>k;
  int a[n];
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
    if(i>=k && a[i]!=a[k-1])
    {
      check=0;
      break;
    }
  }
  int num=a[k-1];
  if(check)
  {
    reverse(a,a+n);
    int j;
    for(j=0; j<n; j++)
    {
      if(a[j]!=num)
      {
        cout<<n-j;
        break;
      }
    }
    if(j==n) cout<<0;
  }
  else cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}