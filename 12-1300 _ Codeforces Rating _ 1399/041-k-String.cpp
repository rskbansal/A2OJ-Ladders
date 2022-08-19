//k-String
#include<bits/stdc++.h>
#define F first
#define S second
using namespace std;
void solve()
{
  int k,ans=1;
  string s,t="";
  cin>>k>>s;
  int n=s.size();
  map<char,int> m;
  for(int i=0; i<n; i++) m[s[i]]++;
  for(auto i:m)
  {
    if(i.S%k!=0) 
    {
      ans=0;
      break;
    }
  }
  if(!ans) cout<<-1;
  else
  {
    for(auto i:m)
    {
      int temp=i.S/k;
      while(temp--) t+=i.F;
    }
    while(k--) cout<<t;
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}