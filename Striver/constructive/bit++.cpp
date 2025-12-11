#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >> n ;

    int ans = 0;
    for(int i=0;i<n;i++){
        string curr ;
        cin >> curr;
        if(curr[1]=='-') ans--;
        else ans++;
    }
    cout <<ans ;
}