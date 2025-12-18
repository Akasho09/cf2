#include <iostream>
using namespace std;

int main() {
    long long n , k;
    cin >> n >> k;

    long long s = 0 , e = k; // e=k not k-1.
    long long maxi = (k)*(k-1)/2 + 1;
    if(maxi<n) {
        cout <<-1;
        return 0;
    }
    while(s<=e){
        long long mid = s+(e-s)/2;
        long long sum = (mid) * (mid-1) / 2;
        if(maxi-sum >= n){
            s=mid+1;
        }else e=mid-1;
    }
    cout << k-s+1;
    return 0;
}
