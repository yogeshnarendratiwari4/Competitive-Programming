#include<bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr, int n) {
   int maximum_element = INT_MIN;
   for(auto x : arr){
      maximum_element = max(x,maximum_element);
   }
   return maximum_element;
}


int main(){
int size;
cin>>size;

vector<int> arr(size);
for(auto &x : arr) cin>>x;

cout<<largestElement(arr,size)<<endl;


}