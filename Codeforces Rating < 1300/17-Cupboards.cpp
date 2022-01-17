//Cupboards
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,p,q;
  cin>>n;
  int x[n][2];
  int cl0=0,cl1=0,cr0=0,cr1=0;
  for(int i=0; i<n; i++)
  {
    cin>>x[i][0]>>x[i][1];
    ((x[i][0]==0)?cl0++:cl1++);
    ((x[i][1]==0)?cr0++:cr1++);
  }
  p=((cl1<cl0)?cl1:cl0);
  q=((cr1<cr0)?cr1:cr0);
  cout<<p+q;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
