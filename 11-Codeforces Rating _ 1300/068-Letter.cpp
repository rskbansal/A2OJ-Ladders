//Letter
#include<bits/stdc++.h>
#define all(x) (x).begin(),(x).end()
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  int ind=0,ans=1,j;
  string a,b;
  getline(cin,a);
  getline(cin,b);
  a.erase(remove(all(a),' '),a.end());
  b.erase(remove(all(b),' '),b.end());
  sort(all(a),greater<>());
  sort(all(b),greater<>());
  for(int i=0; i<b.size(); i++)
  {
    for(j=ind; j<a.size(); j++)
    {
      if(b[i]==a[j])
      {
        ind=j+1;
        break;
      }
    }
    if(j==a.size())
    {
      ans=0;
      break;
    }
  }
  cout<<(ans?"YES":"NO");
}
 
int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}