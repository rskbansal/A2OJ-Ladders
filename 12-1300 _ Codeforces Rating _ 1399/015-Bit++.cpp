//Bit++
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x=0;
  string s;
  cin>>n;
  for(int i=0; i<n; i++)
  {
    cin>>s;
    if(s=="++X" || s=="X++") x+=1;
    if(s=="--X" || s=="X--") x-=1;
  }
  cout<<x;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
