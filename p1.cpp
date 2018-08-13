#include<iostream>
using namespace std;
int main()
{
    int t,n;
    unsigned long long int sum;
    unsigned long long int i3,i5,i15;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        sum=0;
        cin>>n;
        i3=(n-1)/3; //count of numbers in the range divisible by 3
        i5=(n-1)/5;
        i15=(n-1)/15;
        sum+=3*(i3*(i3+1))/2; //sum of series
        sum+=5*(i5*(i5+1))/2;
        sum-=15*(i15*(i15+1))/2;
        cout<<sum<<endl;
    }
    return 0;
}