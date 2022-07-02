//Cakeminator
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int r,c;
  char x;
  cin>>r>>c;
  set<int>row;
  set<int>col;
  for(int i=0; i<r; i++)
  {
    for(int j=0; j<c; j++)
    {
      cin>>x;
      if(x=='S')
      {
        row.insert(i);
        col.insert(j);
      }
    }
  }
  int a=row.size(), b=col.size();
  cout<<(r-a)*c+(c-b)*r-(r-a)*(c-b);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}