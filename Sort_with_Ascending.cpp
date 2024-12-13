#include<bits/stdc++.h>
using namespace std;
int main(){
    int ct;
    cin>>ct;
    for(int i=0; i<ct; ++i){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int j=0; j<n; ++j){
            cin>>a[j];
        }

        bool b = true;

        for(int k=1; k<n; ++k){
            if(a[k]<a[k-1]){
                b = false;
                break;
            }
        }
        if(b){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    
    }
    return 0;
}