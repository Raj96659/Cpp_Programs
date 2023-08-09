// Accept the number from user and check whether it is Armstrong or not.

// Armstrong : Summation of cube of all the digit should be equal to number itself.
// ex. 153 = 1 + 125 + 27 = 153

#include<iostream>
using namespace std;
main()
{
    int r,sum,n,n1;

    cout<<"\nEnter the number to be check :";
    cin>>n;

    sum=0;
    n1=n;

    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(sum==n1)
    {
        cout<<"\nNumber is Armstrong";
    }
    else
    {
        cout<<"\nNumber is not Armstrong";
    }
}
