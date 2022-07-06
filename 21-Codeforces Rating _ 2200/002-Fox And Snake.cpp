//Fox And Snake
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,m;
  cin>>n>>m;
  for(int i=1; i<=n; i++)
  {
    if(i%4==1 || i%4==3)
    {
      for(int j=0; j<m; j++) cout<<'#';
      cout<<"\n";
    }
    if(i%4==2)
    {
      for(int j=0; j<m-1; j++) cout<<'.';
      cout<<"#\n";
    }
    if(i%4==0)
    {
      cout<<"#";
      for(int j=0; j<m-1; j++) cout<<'.';
      cout<<"\n";
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}