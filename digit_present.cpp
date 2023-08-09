// Accept a number and digit from the user and check whether the digit is present or not in number.
// ex. number is 1223 and digit is 3.
// ans. yes, digit is present in number.

using namespace std;
#include<iostream>
main()
{
    int r,n,dig,flag,n1;

    cout<<"\nEnter the number :";
    cin>>n;

    cout<<"\nEnter the digit :";
    cin>>dig;

    flag=0;

    while(n>0)
    {
        r=n%10;
        if(r==dig)
        {
            flag=1;
        }
        n=n/10;
    }
    if(flag==1)
    {
        cout<<"\nDigit is present";
    }
    else
    {
        cout<<"\nDigit is not present";
    }

}
