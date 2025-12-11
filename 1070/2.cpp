#include <iostream>
#include <vector>
#include <string>

using namespace std ;

int main () {
    int t ;
    cin >> t ;

    while(t>0){

        int n ;
        cin >>n ;
        string s;
        cin >> s;
        string s2 = s;
        int ans = 0;
        int m = n;
        while(m>0){
        int zeroes = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeroes++;
        }
        if(zeroes==0){
            break;
        }

        int ind = m-1;
        for(int i=0;i<n;i++){
            s[i]=s[i] | s2[ind]; 
            ind = (ind+1 )%n; 
        }

        int zeroes2 = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0') zeroes2++;
        }
        if(zeroes!=zeroes2){
            ans++;
        }
        m--;
        s2 = s;
        }
        cout <<ans <<endl;
        t--;
    }
}