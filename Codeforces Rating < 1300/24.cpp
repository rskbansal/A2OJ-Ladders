//Amusing Joke
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string a,b,c;
  cin>>a>>b>>c;
  string temp=a+b;
  sort(temp.begin(),temp.end());
  sort(c.begin(),c.end());
  cout<<(temp==c?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}