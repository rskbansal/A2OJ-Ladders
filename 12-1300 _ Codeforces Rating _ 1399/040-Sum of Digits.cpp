//Sum of Digits
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int ans=0;
  string n;
  cin>>n;
  while(n.size()>1)
  {
    int sum=0;
    for(int i=0; i<n.size(); i++) sum+=(int)n[i]-48;
    n=to_string(sum);
    ans++;
  }
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}