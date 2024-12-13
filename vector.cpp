#include<bits/stdc++.h>
using namespace std;
int main(){
      vector<int>v;//type1
      vector<int>v2(5); //type2
      vector<int>v3(5,10); //type3 
      vector<int>v4(v2); //type4
      int a[5]={1,2,3,4,5};
      vector<int>v5(a,a+5); //type5
      for(int i=0; i<5; i++){
        cout<<a[i]<<" ";
      }
      cout<<v.size()<<endl;

    return 0;
}