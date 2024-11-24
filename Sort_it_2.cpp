#include<bits/stdc++.h>

using namespace std;

int main(){
    string s;
    while((getline(cin,s))){
        string gap="";
        for(int i=0;i<s.length();i++){
            if(s[i] !=' '){
                gap+=s[i];
            }
        }
        int n=gap.length();
        for(int i=0;i<n-1;i++){
            for(int k=i+1;k<n;k++){
                if(gap[i]>gap[k]){
                    swap(gap[i],gap[k]);
                }
            }
        }
        cout<<gap<<endl;
    }
    return 0;
}