#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);

    stringstream words(s);
    string name;
     while(words>>name){
        if(name=="Jessica"){
            cout << "YES" << endl;
            break;
        }
     }
     cout<<"NO" << endl;
     return 0;
}