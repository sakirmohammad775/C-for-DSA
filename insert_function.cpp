#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int m;
    cin>>m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    int x;
    cin>>x;
    for(int i=0;i<b.size();i++){
    a.insert(a.begin()+x+i,b[i]);
    }

    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
 
}