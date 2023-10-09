#include<iostream>
using namespace std;


int main(){
int operation;
cin>>operation;

// initial value of x is 0
int x = 0;
while(operation--){
    string op;
    cin>>op;

    if(op=="++X" || op=="X++") x++;
    else x--;
}
cout<<x<<endl;


}