//Ilya and Queries
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int m,cnt=0;
  string s;
  cin>>s>>m;
  int n=s.size();
  int ans[n]={0};
  for(int i=1; i<n; i++)
  { 
    if(s[i]==s[i-1]) cnt++;
    ans[i]=cnt;
  }
  for(int i=0; i<m; i++)
  {
    int l,r;
    cin>>l>>r;
    cout<<ans[r-1]-ans[l-1]<<"\n";
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}