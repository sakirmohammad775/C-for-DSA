#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n;
  cin>>n;
  vector<int> a(n);
  
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  for(int i=0;i<n;i++){
    auto it=find(a.begin()+i+1,a.end(),a[i]);
    if(it!=a.end()){
      cout<<"YES"<<endl;
      return 0;
    }
  }
  cout<<"NO"<<endl;
 
    return 0;
}