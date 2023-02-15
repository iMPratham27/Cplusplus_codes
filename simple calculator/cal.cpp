#include <iostream>
using namespace std ;

int main()
{
    char op;
    double n1 ,n2 ;

    cout<<"Enter the operator(+,-,*,/)" ;
    cin>> op ;

    cout<<"Enter two numbers: "<<endl ;
    cin>> n1 >> n2 ;

    switch(op)
    {
        case'+':
         cout<< n1 << "+" << n2 << "=" << n1+n2 ;
         break;

        case'-':
         cout<< n1 << "-" << n2 << "=" << n1-n2 ;
         break;

        case'*':
         cout<< n1 << "*" << n2 << "=" << n1*n2 ;
         break;

        case'/':
         cout<< n1 << "/" << n2 << "=" << n1/n2 ;
         break;
    }
    return 0 ;
}