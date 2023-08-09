#include<iostream>
using namespace std;
main()
{
    int a,b,c,term;
    a=1;
    b=2;
    term=1;
    while(term<=8)
    {
        c=a+b;
        cout<<"\n"<<c;
        a=b;
        b=c;
        term=term+1;
    }
}
