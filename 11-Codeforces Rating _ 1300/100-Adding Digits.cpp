//Adding Digits
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a,b,n;
  cin>>a>>b>>n;
  string ans=to_string(a);
  if(a%b==0||(a*10)%b==0)
  {
    while(n--) ans+='0';
    cout<<ans;
  }
  else
  {
    if(b-((a*10)%b)>9) cout<<-1;
    else
    {
      ans+=to_string(b-((a*10)%b));
      n--;
      while(n--) ans+='0';
      cout<<ans;
    }
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}