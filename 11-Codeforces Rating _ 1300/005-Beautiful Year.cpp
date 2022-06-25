//Beautiful Year
#include<iostream>
using namespace std;
void solve()
{
  int y;
  cin>>y;
  for(int i=y+1; i<10000; i++)
  {
    string s=to_string(i);
    if(s[0]!=s[1] && s[1]!=s[2] && s[2]!=s[3] && s[0]!=s[2] && s[1]!=s[3] && s[0]!=s[3])
    {
      cout<<i;
      break;
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
