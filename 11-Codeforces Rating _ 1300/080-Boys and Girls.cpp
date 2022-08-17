//Boys and Girls
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  int n,m;
  cin>>n>>m;
  string repeat=(n>m?"BG":"GB");
  for(int i=0; i<min(n,m); i++) cout<<repeat;
  for(int i=0; i<abs(n-m); i++) cout<<(n>m?"B":"G");
}

int main()
{ 
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}