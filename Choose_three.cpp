#include <iostream>
#include<utility>
using namespace std;
void sort_it(int n,int*arr){
    for(int i=0;i<n-1;i++){
        int max=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]>arr[max]){
                max=j;
            }
        }
        swap(arr[i],arr[max]);
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int j=0;j<n;j++){
        cin>>arr[j];
 }

        sort_it(n,arr);
    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    
    return 0;
}