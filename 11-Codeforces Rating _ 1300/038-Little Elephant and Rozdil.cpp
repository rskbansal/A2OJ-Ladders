//Little Elephant and Rozdil
#include<bits/stdc++.h>
#define all(c) (c).begin(),(c).end()
using namespace std;
void solve()
{
  int n;
  cin>>n;
  vector<int>a(n);
  for(int i=0; i<n; i++)
  {
    cin>>a[i];
  }
  int m=count(all(a),*min_element(all(a)));
  if(m==1) cout<<min_element(all(a))-a.begin()+1;
  else cout<<"Still Rozdil";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}