//Perfect Permutation
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n;
  cin>>n;
  if(n%2==1) cout<<-1;
  else
  {
    for(int i=1; i<=n; i+=2)
    {
      cout<<i+1<<" "<<i<<" ";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
