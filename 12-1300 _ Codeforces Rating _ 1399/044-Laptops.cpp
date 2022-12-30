//Laptops
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long double ld;
void solve()
{
  bool ans=0;
  int n;
  cin>>n;
  vector<pair<int,int>> arr;
  for(int i=0; i<n; i++)
  {
    int a,b;
    cin>>a>>b;
    arr.push_back({a,b});
  }
  sort(arr.begin(),arr.end());
  for(int i=0; i<n-1; i++)
  {
    if(arr[i].first<arr[i+1].first && arr[i].second>arr[i+1].second)
    {
      ans=1;
      break;
    }
  }
  cout<<(ans?"Happy":"Poor")<<" Alex";
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}