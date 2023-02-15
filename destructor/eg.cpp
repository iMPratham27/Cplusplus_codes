# include <iostream>
using namespace std;

class Example
{
    public:

    Example()  // constructor
    {
        cout<<"This is default constructor"<<endl;
    }

    Example(int a,int b)
    {
        cout<<"This is parameterized constructor"<<endl;
        cout<<"Passing parameters to constructors "<<a<<" "<<b<<endl;

    }

    ~Example()   // destructor 
    {
        cout<<"Created object has been destroyed"<<endl;
    }

};

int main()
{
    Example x();  //x&y are objects
    Example y(10,20);

    return 0;
}