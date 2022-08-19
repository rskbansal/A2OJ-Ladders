//Life Without Zeros
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a,b,c;
  cin>>a>>b;
  c=a+b;
  string sa=to_string(a),sb=to_string(b),sc=to_string(c);
  for(int i=0; i<sa.size(); i++)
  {
    if(sa[i]=='0')
    {
      sa.erase(sa.begin()+i);
      i--;
    }
  }
  for(int i=0; i<sb.size(); i++)
  {
    if(sb[i]=='0')
    {
      sb.erase(sb.begin()+i);
      i--;
    }
  }
  for(int i=0; i<sc.size(); i++)
  {
    if(sc[i]=='0')
    {
      sc.erase(sc.begin()+i);
      i--;
    }
  }
  cout<<(stoi(sa)+stoi(sb)==stoi(sc)?"YES":"NO");
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}