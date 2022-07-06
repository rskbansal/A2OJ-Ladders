//Pangram
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,j,ans=1;
  string s;
  cin>>n>>s;
  transform(s.begin(), s.end(), s.begin(), ::tolower);
  for(char i='a'; i<='z'; i++)
  {
    for(j=0; j<n; j++)
    {
      if(i==s[j]) break;
    }
    if(j==n)
    {
      ans=0;
      break;
    }
  }
  cout<<(ans?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}