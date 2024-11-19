#include <bits/stdc++.h>
using namespace std;
int* fun(){   //return as a pointer to
    int*a=new int[5];
    for(int i = 0; i < 5; i++){
        cin>>a[i];
    }
    return a; //return the address of array
}int main() //receive as a pointer to
{
   int*x= fun();
   for(int i = 0; i < 5; i++){
    cout<<x[i]; }
    return 0;
}
