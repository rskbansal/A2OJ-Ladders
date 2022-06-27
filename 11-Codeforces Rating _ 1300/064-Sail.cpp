//Sail
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  ll t,sx,sy,ex,ey;
  string s;
  cin>>t>>sx>>sy>>ex>>ey>>s;
  int i,ans=1,cx=0,cy=0;
  char x,y;
  x=(ex-sx<0?'W':'E');
  y=(ey-sy<0?'S':'N');
  for(i=0; i<t; i++)
  {
    if(cx!=abs(ex-sx) && s[i]==x) cx++;
    else if(cy!=abs(ey-sy) && s[i]==y) cy++;
    if(cx==abs(ex-sx) && cy==abs(ey-sy)) break;
  }
  if(i==t) ans=0;
  cout<<(ans?i+1:-1);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}