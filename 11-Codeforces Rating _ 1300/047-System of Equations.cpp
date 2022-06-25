//System of Equations
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m,count=0;
  cin>>n>>m;
  for(int a=0; a<=sqrt(n); a++)
  {
    for(int b=0; b<=sqrt(m); b++)
    {
      if(pow(a,2)+b==n && pow(b,2)+a==m) count++;
    }
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}