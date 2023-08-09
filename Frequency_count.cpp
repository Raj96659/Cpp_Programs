// Accept a number and digit from the user and print frequency count of digit in number.
// ex. number is 11223 and digit is 1.
// ans. frequency count of selected digit 2.`

using namespace std;
#include<iostream>
main()
{
    int r,n,dig,cnt,n1;

    cout<<"\nEnter the number :";
    cin>>n;

    cout<<"\nEnter the digit :";
    cin>>dig;

    cnt=0;

    while(n>0)
    {
        r=n%10;
        if(r==dig)
        {
            cnt=cnt+1;
        }
        n=n/10;
    }
    cout<<"\nFrequeny count is :"<<cnt;

}
