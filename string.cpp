#include<bits/stdc++.h>
using namespace std;
int main(){
    char s1[10]="hello";
    char s2[10]="helloo";
    if(strcmp(s1,s2)==0){
        cout<<"Equal strings"<<endl;
    }
    else{
        cout<<"Unequal strings"<<endl;
    }
    return 0;
}