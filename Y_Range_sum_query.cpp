#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, q;
    cin >> n >> q;
    vector<int> v(n + 1);
    for(int i = 1; i <= n; i++){//o(N)
        cin >> v[i];
    }
    vector<int> pre(n + 1);
    pre[1] =v[0];
    for(int i = 1; i <= n; i++){
        pre[i]=pre[i-1]+v[i];
    }

    while(q--){//o(q)
         int l,r;
         cin >> l >> r;
         int sum;
         //time limit exceed !! so reduce... 
         if(l==1){
            sum=pre[r];
         }
         else{

         int sum=pre[r]-pre[l-1];
         }
         cout << sum << endl;
    }
    return 0;
}
//final complexity o(qn)