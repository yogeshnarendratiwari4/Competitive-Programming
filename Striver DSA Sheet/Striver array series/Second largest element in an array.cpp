#include<bits/stdc++.h>
using namespace std;


int second_largest_element(vector<int> &arr,int n){
    int second_max = INT_MIN;
    int max = INT_MIN;

    for(int i=0 ; i<n ; i++){
        if(arr[i]>max){
            second_max = max;
            max = arr[i];
        }
        else if(arr[i]>second_max && arr[i]!=max){
            second_max = arr[i];
        }
    }
    return second_max;
}
int main(){
int n;
cin>>n;
vector<int> arr(n,0);
for(auto &x : arr) cin>>x;
cout<<second_largest_element(arr,n)<<endl;
}