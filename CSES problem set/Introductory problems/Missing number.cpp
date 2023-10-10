#include<bits/stdc++.h>
using namespace std;

// approach 1
int missing_number_1 (int n,vector<int> &arr){
   int sum1 = (n*(n+1))/2;
   int sum2 = 0;
   for(auto x : arr) sum2+=x;
   return sum1-sum2;
}


// approach 2 

int missing_number_2(int n,vector<int> &arr){
    int xor1 = 0;
    for(int i=1 ; i<=n ; i++){
        xor1 = xor1 ^ i;
    }

    int xor2 = 0;
    for(auto x : arr) xor2 = xor2 ^ x;
    return xor1^xor2;
}


int main(){
int n;
cin>>n;

vector<int> arr(n-1);
for(auto &x : arr) cin>>x;

cout<<missing_number_2(n,arr)<<endl;


}