//Shower Line
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int a[5][5],ans=0;
  int s[5]={1,2,3,4,5};
  for(int i=0; i<5; i++)
  {
    for(int j=0; j<5; j++)
    {
      cin>>a[i][j];
    }
  }
  do
  {
    int sum=0;
    sum+=a[s[0]-1][s[1]-1]+a[s[1]-1][s[0]-1]+a[s[2]-1][s[3]-1]+a[s[3]-1][s[2]-1];
    sum+=a[s[1]-1][s[2]-1]+a[s[2]-1][s[1]-1]+a[s[3]-1][s[4]-1]+a[s[4]-1][s[3]-1];
    sum+=a[s[2]-1][s[3]-1]+a[s[3]-1][s[2]-1];
    sum+=a[s[3]-1][s[4]-1]+a[s[4]-1][s[3]-1];
    ans=max(ans,sum);
  } while(next_permutation(s,s+5));
  cout<<ans;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}