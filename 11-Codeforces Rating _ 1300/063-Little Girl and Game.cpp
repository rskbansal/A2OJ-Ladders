//Little Girl and Game
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  bool pal=1;
  string s;
  cin>>s;
  if(s.size()%2==0)
  {
    map<char,int>m;
    for(int i=0; i<s.size(); i++) m[s[i]]++;
    for(auto x:m)
    {
      if(x.second%2)
      {
        pal=0;
        break;
      }
    }
    cout<<(pal?"First":"Second");
  }
  else cout<<"First";   
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}