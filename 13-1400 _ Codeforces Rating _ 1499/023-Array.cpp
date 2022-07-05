//Array
#include<bits/stdc++.h>
using namespace std;
void solve()
{
  int n,x,czero=0;
  cin>>n;
  vector<int>pos,neg;
  for(int i=0; i<n; i++)
  {
    cin>>x;
    if(x==0) czero++;
    else if(x<0) neg.push_back(x);
    else pos.push_back(x);
  }
  cout<<"1 "<<neg[0]<<"\n";
  if(neg.size()%2==1)
  {
    cout<<pos.size()+neg.size()-1<<" ";
    for(int i=1; i<neg.size(); i++) cout<<neg[i]<<" ";
    for(int i=0; i<pos.size(); i++) cout<<pos[i]<<" ";
    cout<<"\n"<<czero<<" ";
    while(czero--) cout<<"0 ";
  }
  else
  {
    cout<<pos.size()+neg.size()-2<<" ";
    for(int i=1; i<neg.size()-1; i++) cout<<neg[i]<<" ";
    for(int i=0; i<pos.size(); i++) cout<<pos[i]<<" ";
    cout<<"\n"<<czero+1<<" ";
    while(czero--) cout<<"0 ";
    cout<<neg[neg.size()-1];
  }
}

int main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  solve();
}