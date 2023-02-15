# include <iostream>
using namespace std;

// Recursive function : a particular function that calls itself repeatedly until a certain condition is met.
// factorial example using recursive function 

int factorial(int n)
{
    if(n<=1)
    {
        return 1;
    }

    return n*factorial(n-1);
}

int main()
{
    int a;
    cout<<"Enter a number: "<<endl;
    cin>>a;

    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    return 0;
}

// steps::
// factorial(4)= 4 * factorial(3)
// factorial(4)= 4 * 3 * factorial(2)
// factorial(4)= 4 * 3 * 2 * factorial(1)
// factorial(4)= 4 * 3 * 2 * 1 = 241