//sort function in c++
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    sort(arr,arr+4);//sort function in c++ (a+5 endl)
    sort (arr,arr+n,greater<int>());
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    } 
    return 0;
}