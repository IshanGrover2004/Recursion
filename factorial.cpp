//Factorial program using recursion
// Created by grove on 05-04-2023.

#include <iostream>
using namespace std;

int factorial(int n){
    if ((n==0)||(n==1)){      //base case or condition(when recursion at n=0 or 1 will stop)
        return 1;
    }
    else{
        return n* factorial(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    return 0;
}
