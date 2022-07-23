//Insomnia cure
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int k,l,m,n,d,count=0;
  cin>>k>>l>>m>>n>>d;
  vector<int> arr(d);
  for(int i=0; i<d; i++)
  {
    arr[i]=i+1;
  }
  for(int j:{k,l,m,n})
  {
    for(int i=1; i<=d; i++)
    {
      if(i%j==0 && arr[i]!=-1)
      {
        arr[i]=-1;
        count++;
      }
    }
  }
  cout<<count;
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
