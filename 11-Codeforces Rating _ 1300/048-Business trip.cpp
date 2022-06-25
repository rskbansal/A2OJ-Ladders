//Business trip
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int k,sum=0,count=0;
  vector<int> a(12);
  cin>>k;
  for(int i=0; i<12; i++) cin>>a[i];
  sort(a.rbegin(),a.rend());
  for(int i=0; i<12; i++)
  {
    if(sum>=k) break;
    else
    {
      sum+=a[i];
      count++;
    }
  }
  cout<<(sum<k?-1:count);
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}