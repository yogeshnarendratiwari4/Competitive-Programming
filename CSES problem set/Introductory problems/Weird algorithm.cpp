#include<iostream>
using namespace std;


int main(){
int n;
cin>>n;
long long int num = n;
while(num!=1){
    cout<<num<<" ";
    num = num%2 ? num*3 + 1 : num/2;
}
cout<<num<<endl;
}