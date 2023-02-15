# include <iostream>
using namespace std ;

/*
Eg.
***
***
***

*/

int main()
{
    int n;
    cout<<"Enter the vaule of n: ";
    cin>>n;
    // i= row & j=column
    int i = 1;
    while(i<=n)
    {
        int j = 1;

        while(j<=n)
        {
            cout<<"*";
            j=j+1;
        }
        cout<<endl; // here * goes down
        i=i+1;
    }
    return 0;
}

