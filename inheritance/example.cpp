#include<iostream>
#include<cmath>
using namespace std;

// this is an example of multiple inheritance

class SimpleCalulator
{
    int a , b ;

    public:
      void getDataSimple()
      {
        cout<<"Simple Calculator Operations are: "<<endl;
        cout<<"Enter the value of a is ";
        cin>>a;
        cout<<"Enter the value of b is ";
        cin>>b;
      }

      void performOperationSimple()
      { 
        cout<<"The value of a+b is: "<< a + b <<endl;
        cout<<"The value of a-b is: "<< a - b <<endl;
        cout<<"The value of a*b is: "<< a * b <<endl;
        cout<<"The value of a/b is: "<< a / b <<endl;
      }

};

class ScientificCalulator
{
    int a , b ;

    public:
      void getDataScientific()
      {
        cout<<"Scientific Calculator Operations are: "<<endl;
        cout<<"Enter the value of a is ";
        cin>>a;
        cout<<"Enter the value of b is ";
        cin>>b;
      }

      void performOperationScientific()
      {
        cout<<"The value of sin(a) is: "<< sin(a) <<endl;
        cout<<"The value of cos(a) is: "<< cos(a) <<endl;
        cout<<"The value of tan(a) is: "<< tan(a) <<endl;
        cout<<"The value of tan(b) is: "<< tan(b) <<endl;
      }

};

class HybridCalculator : public SimpleCalulator , public ScientificCalulator 
{

};

int main()
{
    HybridCalculator calc ;
    calc.getDataSimple() ;
    calc.performOperationSimple();
    calc.getDataScientific();
    calc.performOperationScientific();

    return 0;
}