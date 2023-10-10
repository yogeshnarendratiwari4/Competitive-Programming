#include<bits/stdc++.h>
using namespace std;


int Linear_search(vector<int> &arr,int n,int target){
    for(int i=0 ; i<n ; i++){
        if(arr[i]==target) return true;
    }
    return false;
}
int main(){
int n,target;
cin>>n>>target;
vector<int> arr(n,0);
for(auto &x : arr) cin>>x;
cout<<Linear_search(arr,n,target)<<endl;
}