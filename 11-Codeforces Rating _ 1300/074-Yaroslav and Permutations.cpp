//Yaroslav and Permutations
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,max=0;
  cin>>n;
  int a[n];
  map<int,int>m;
  for(int i=0; i<n; i++) 
  {
    cin>>a[i];
    m[a[i]]++;
    if(m[a[i]]>max) max=m[a[i]];
  }
  if((n%2==0 && max<=n/2) || (n%2==1 && max<=n/2+1)) cout<<"YES";
  else cout<<"NO";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}