// Created by Ishan grover on 06-04-2023.
//creating recursive function for powering any number
#include <iostream>
using namespace std;

int power(int num,int pow){
    if (pow==0){
        return 1;
    }
    return num*power(num,pow-1);
}

int main() {

    int n,pow;
    cin>>n>>pow;
    cout<<power(n,pow)<<endl;
}
