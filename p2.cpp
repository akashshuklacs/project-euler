#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n,t;
    unsigned long long int lim,sum,fib1, fib2;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        lim=3;
        sum=0;
        fib1=1;
        fib2=2;
        cin>>n;
        
        while(fib1<n)
        {
            if(fib1%2==0)
                sum+=fib1;
            fib2=fib1+fib2;
            fib1=fib2-fib1;
        }
        cout<<sum<<endl;    
    }
    
    return 0;
}