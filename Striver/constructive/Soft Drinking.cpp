#include <iostream>
using namespace std;
int main () {
    int n, k, l, c, d, p, nl, np ;
    cin >>n >>k >>l >>c >>d >>p >>nl >>np ;

    int ans = min(min((k*l)/nl,p/np), (c*d));

    cout <<ans/n ;
}