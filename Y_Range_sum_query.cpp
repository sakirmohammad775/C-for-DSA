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
    while(q--){//o(q)
         int l,r;
         cin >> l >> r;
         int sum=0;
         //time limit exceed !! so reduce... 
         for(int i = l; i <= r; i++){//o(n)
            sum += v[i];
         }//o(QN)
         cout << sum << endl;
    }
    return 0;
}
//final complexity o(qn)