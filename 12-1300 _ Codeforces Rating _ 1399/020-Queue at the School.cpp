//Queue at the School
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,t;
  cin>>n>>t;
  string s;
  cin>>s;
  while(t--)
  {
    for(int j=0; j<n-1; j++)
    {
      if(s[j]=='B' && s[j+1]=='G')
      {
        s[j]='G';
        s[j+1]='B';
        j++;
      }
    }
  }
  cout<<s;
}

int main() 
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
} 
