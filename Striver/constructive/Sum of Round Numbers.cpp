#include <iostream>
#include <vector>
using namespace std;

int main(){
    int t ;
    cin >> t;
    while(t>0){
        int n ;
        cin >>n;
        vector<int>ans;
        int mult = 1;
        while(n>10){
            int rem = n%10;
            if(rem!=0){
                ans.push_back(mult*rem);
            }
            mult*=10;
            n/=10;
        }
        ans.push_back(n*mult);
        cout <<ans.size() <<endl;
        for(int num : ans){
            cout <<num <<" ";
        }
        t--;
    }
}