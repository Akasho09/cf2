#include <iostream>
#include <vector>
using namespace std ;

int main () {
    int t ;
    cin >> t ;

    while(t>0){

        int n ;
        cin >>n ;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin >> v[i];
        }

        int ans = 0;
        int maxi = INT_MIN ;

        for(int num : v){
            if(num < maxi ) ans++;
            maxi = max(num , maxi);
        }

        cout << ans <<" ";
        t--;
    }
}