// 4! = 4*3*2*1 = 24

#include<iostream>
using namespace std;
main()
{
    int f,n;

    cout<<"\nEnter the number :";
    cin>>n;

    f=1;

    while(n>0)
    {
        f=f*n;
        n=n-1;
    }
    cout<<"\nFactorial is :"<<f;
}
