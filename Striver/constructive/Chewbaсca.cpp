#include <iostream>
using namespace std;

int main () {
    long long x ;
    cin >> x ;
    long long ans = 0;
    long long mult = 1;
    while(x>9){
        int digit = x%10;
        if(digit%10>4){
            ans = ans + (9-digit)*mult;
        }else {
            ans = ans + digit*mult;
        }
        mult*=10;
        x=x/10;
    }
    
    int digit = x%10;
    if(digit!=9 && digit%10>4){
            ans = ans + (9-digit)*mult;
    }else {
        ans = ans + digit*mult;
    }

    cout <<ans ;
    
}