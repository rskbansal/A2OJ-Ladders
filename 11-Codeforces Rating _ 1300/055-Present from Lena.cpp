//Present from Lena
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  for(int i=0; i<=n; i++)
  {
    for(int j=0; j<n-i; j++) cout<<"  ";
    for(int k=0; k<=i-1; k++) cout<<k<<" ";
    cout<<i;
    for(int k=i-1; k>=0; k--) cout<<" "<<k;
    cout<<"\n";
  }
  for(int i=n-1; i>=0; i--)
  {
    for(int j=0; j<n-i; j++) cout<<"  ";
    for(int k=0; k<=i-1; k++) cout<<k<<" ";
    cout<<i;
    for(int k=i-1; k>=0; k--) cout<<" "<<k;
    cout<<"\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}