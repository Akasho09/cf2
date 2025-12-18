#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> needs(n), has(n);
    for(int i=0;i<n;i++){
        cin >> needs[i];
    }
    for(int i=0;i<n;i++){
        cin >> has[i];
    }
    int s = 1;
    int e = INT_MAX;

    while(s<e){
        long long mid = s + (e - s) / 2;
        long long needed = 0;
        for(int i=0;i<n;i++){
            long long num = mid*needs[i]-has[i];
            if(num>0){
                needed+=(num);
                if (needed > k) break;
            }
        }
        if(needed<=k) s=mid+1;
        else e=mid;
    }

    cout << s-1;
    return 0;
}