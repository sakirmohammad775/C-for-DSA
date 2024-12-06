#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    string name[101],grade[101],section[101],id[101];
    for(int i=0;i<n;i++){
        cin>> name[i]>>grade[i]>>section[i]>>id[i];

    }
    for(int i=0,j=n-1;i<j;i++,j--){
        swap(section[i],section[j]);
    }
    for(int i=0,j=0;i<n;i++){
        cout<<name[i]<<" "<<grade[i]<<" "<<section[i]<<" "<<id[i]<<endl;
    }
    return 0;
}