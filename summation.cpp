// Accept the number from user and print summation of digits.
// 123 = 1+2+3 =6

#include<iostream>
using namespace std;
main()
{
    int n,r,sum;
    cout<<"\nEnter the number :";
    cin>>n;
    sum=0;

    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    cout<<"\nSummation of number is :"<<sum;
}
