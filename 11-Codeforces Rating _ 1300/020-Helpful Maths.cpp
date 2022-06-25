//Helpful Maths
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  string s;
  cin>>s;
  vector<int> arr;
  for(int i=0; i<s.size(); i+=2)
  {
    arr.push_back(int(s[i])-48);
  }
  sort(arr.begin(),arr.end());
  int m=arr.size();
  for(int j=0; j<m-1; j++)
  {
    cout<<arr[j]<<"+";
  }
  cout<<arr[m-1];
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}
