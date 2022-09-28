//Pashmak and Garden
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int x1,y1,x2,y2;
  cin>>x1>>y1>>x2>>y2;
  if(x1-x2==y1-y2) cout<<min(x1,x2)<<" "<<max(y1,y2)<<" "<<max(x1,x2)<<" "<<min(y1,y2);
  else if(x1-x2==y2-y1) cout<<min(x1,x2)<<" "<<min(y1,y2)<<" "<<max(x1,x2)<<" "<<max(y1,y2);
  else if(x1==x2) cout<<x1+abs(y1-y2)<<" "<<min(y1,y2)<<" "<<x1+abs(y1-y2)<<" "<<max(y1,y2);
  else if(y1==y2) cout<<min(x1,x2)<<" "<<y1+abs(x1-x2)<<" "<<max(x1,x2)<<" "<<y1+abs(x1-x2);
  else cout<<-1;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}