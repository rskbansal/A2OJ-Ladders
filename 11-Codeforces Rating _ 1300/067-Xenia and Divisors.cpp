//Xenia and Divisors
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,ans=1;
  cin>>n;
  map<int,int>count;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    if(x==5 || x==7)
    {
      ans=0;
      break;
    }
    else count[x]++;
  }
  if(ans)
  {
    if(count[1]!=n/3 || count[4]>count[2] || count[2]+count[3]!=n/3) ans=0;
    else
    {
      for(int i=0; i<count[4]; i++) cout<<"1 2 4\n";
      for(int i=0; i<count[2]-count[4]; i++) cout<<"1 2 6\n";
      for(int i=0; i<count[3]; i++) cout<<"1 3 6\n";
    }
  }
  if(!ans) cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}