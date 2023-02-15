# include <iostream>
using namespace std;

int sum(int a, int b);

int main()
{
    int a,b ;
    cout<<"Enter the first number :"<<endl;
    cin>>a;
    cout<<"Enter the second number :"<<endl;
    cin>>b;

    cout<<"The sum is: "<<sum(a,b);
    return 0;
}

int sum(int a, int b)
{
    int c=a+b;
    return c; 
    
}
