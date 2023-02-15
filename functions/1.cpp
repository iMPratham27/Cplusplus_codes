# include <iostream>
using namespace std;

int sum(int a, int b)
{
  //a & b are formal parameters= these are parameters is defined to just use in a particular function(like here, sum)
  // the parameters take values from actual parameters 
    int c=a+b;
    return c; 
    
}

int main()
{
    int num1,num2 ;
    cout<<"Enter the first number :"<<endl;
    cin>>num1;
    cout<<"Enter the second number :"<<endl;
    cin>>num2;
 //num1 & num2 are actual parameters
    cout<<"The sum is: "<<sum(num1,num2);
    return 0;
}