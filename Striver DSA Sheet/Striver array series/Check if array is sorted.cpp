#include<bits/stdc++.h>
using namespace std;

int isSorted(int n, vector<int> arr) {
    
    // start from 1 st index 

    for(int i=1 ; i<n ; i++){

        // if previous element is not less or equal to current element
        // then array is not in sorted increasing order

        if(arr[i-1]>arr[i]) return 0;
    }
    return 1;
    
}


int main(){
int size;
cin>>size;

vector<int> arr(size);
for(auto &x : arr) cin>>x;

cout<<isSorted(size,arr)<<endl;


}