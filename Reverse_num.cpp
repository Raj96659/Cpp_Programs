// Accept the number from user and print it in reverse order.
// 123 = 321

#include<iostream>
using namespace std;
main()
{
    int n,r;
    cout<<"\nEnter the number:";
    cin>>n;
    cout<<"\nReverse number is :";
    while(n>0)
    {
        r=n%10;
        cout<<r;
        n=n/10;
    }
}
