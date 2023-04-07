// Created by Ishan grover on 06-04-2023.
// Print the nth term of fibonacci series

#include <iostream>
using namespace std;

// Fibonacci series --> 0,1,1,2,3,5,8,13,21..........
int fibonacci(int n){
    if (n<=1){return n;}                     //this approach is not optimised bcs of too much recursive calls when n is greater
    return fibonacci(n-1) + fibonacci(n-2);
}

// Tribonacci series --> 0,1,1,2,4,7,13,24,44..........
int tribonacci(int n) {
        if (n==0) return 0;
        if (n==1 || n==2) return 1;
        
        // return tribonacci(n-1) + tribonacci(n-2) + tribonacci(n-3);
        // Time limit exceeded bcs of too many recursive calls
        
        int n1=0,n2=1,n3=1,sum;
        for (int i=3;i<=n;i++){
            int sum = n1 + n2 + n3;
            n1 = n2;
            n2 = n3;
            n3 = sum;
        }
        return n3;
    }

int main(){
    int n;
    cout<<"How many terms of fabonacci series needed? "<<endl;
    cin>>n;
    cout<<fibonacci(n);
    return 0;
}

