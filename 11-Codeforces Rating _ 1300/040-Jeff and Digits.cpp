//Jeff and Digits
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,c5=0,c0=0,x;
  string s="";
  cin>>n;
  int arr[n];
  for(int i=0; i<n; i++)
  {
    cin>>arr[i];
    if(arr[i]==5) c5++;
  }
  c0=n-c5;
  if(c0==0) cout<<-1;
  else
  {
    if(c5>=9)
    {
      x=c5-(c5%9);
      for(int i=0; i<x; i++) s+='5';
      for(int i=0; i<c0; i++) s+='0';
      cout<<s;
    }
    else cout<<0;
  }
  
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}